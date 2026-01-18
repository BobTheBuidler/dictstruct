import operator

import pytest

pytest.importorskip("pytest_codspeed")
from msgspec import json
from pytest_codspeed import BenchmarkFixture

from benchmarks.batch import batch
from benchmarks.data import JsonStruct, frozen_struct, json_payload, large_struct, small_struct

FAST_ITERATIONS = 50000
DECODE_ITERATIONS = 10000


def consume_iter(obj) -> None:
    for _ in obj:
        pass


def consume_items(obj) -> None:
    for _ in obj.items():
        pass


def consume_values(obj) -> None:
    for _ in obj.values():
        pass


@pytest.mark.benchmark(group="contains")
@pytest.mark.parametrize(
    "key",
    ["field1", "missing"],
    ids=["hit", "miss"],
)
def test_contains(benchmark: BenchmarkFixture, key: str) -> None:
    benchmark(batch, FAST_ITERATIONS, operator.contains, small_struct, key)


@pytest.mark.benchmark(group="get")
@pytest.mark.parametrize(
    "key",
    ["field1", "missing"],
    ids=["hit", "miss"],
)
def test_get(benchmark: BenchmarkFixture, key: str) -> None:
    benchmark(batch, FAST_ITERATIONS, small_struct.get, key, "default")


@pytest.mark.benchmark(group="getitem")
def test_getitem(benchmark: BenchmarkFixture) -> None:
    benchmark(batch, FAST_ITERATIONS, operator.getitem, small_struct, "field1")


@pytest.mark.benchmark(group="len")
@pytest.mark.parametrize(
    "obj",
    [small_struct, large_struct],
    ids=["small", "large"],
)
def test_len(benchmark: BenchmarkFixture, obj) -> None:
    benchmark(batch, FAST_ITERATIONS, len, obj)


@pytest.mark.benchmark(group="iter")
@pytest.mark.parametrize(
    "obj",
    [small_struct, large_struct],
    ids=["small", "large"],
)
def test_iter(benchmark: BenchmarkFixture, obj) -> None:
    benchmark(batch, FAST_ITERATIONS, consume_iter, obj)


@pytest.mark.benchmark(group="items")
@pytest.mark.parametrize(
    "obj",
    [small_struct, large_struct],
    ids=["small", "large"],
)
def test_items(benchmark: BenchmarkFixture, obj) -> None:
    benchmark(batch, FAST_ITERATIONS, consume_items, obj)


@pytest.mark.benchmark(group="values")
@pytest.mark.parametrize(
    "obj",
    [small_struct, large_struct],
    ids=["small", "large"],
)
def test_values(benchmark: BenchmarkFixture, obj) -> None:
    benchmark(batch, FAST_ITERATIONS, consume_values, obj)


@pytest.mark.benchmark(group="hash")
def test_hash(benchmark: BenchmarkFixture) -> None:
    benchmark(batch, FAST_ITERATIONS, hash, frozen_struct)


@pytest.mark.benchmark(group="decode")
def test_json_decode(benchmark: BenchmarkFixture) -> None:
    benchmark(batch, DECODE_ITERATIONS, json.decode, json_payload, type=JsonStruct)
