import operator

import pytest

pytest.importorskip("pytest_codspeed")
from msgspec import json
from pytest_codspeed import BenchmarkFixture

from benchmarks.data import JsonStruct, frozen_struct, json_payload, large_struct, small_struct
from benchmarks.utils import run_10k, run_50k, consume_items, consume_iter, consume_values


@pytest.mark.benchmark(group="contains")
@pytest.mark.parametrize("key", ["field1", "missing"], ids=["hit", "miss"])
def test_contains(benchmark: BenchmarkFixture, key: str) -> None:
    benchmark(run_50k, operator.contains, small_struct, key)


@pytest.mark.benchmark(group="get")
@pytest.mark.parametrize("key", ["field1", "missing"], ids=["hit", "miss"])
def test_get(benchmark: BenchmarkFixture, key: str) -> None:
    benchmark(run_50k, small_struct.get, key, "default")


@pytest.mark.benchmark(group="getitem")
def test_getitem(benchmark: BenchmarkFixture) -> None:
    benchmark(run_50k, operator.getitem, small_struct, "field1")


@pytest.mark.benchmark(group="len")
@pytest.mark.parametrize("obj", [small_struct, large_struct], ids=["small", "large"])
def test_len(benchmark: BenchmarkFixture, obj) -> None:
    benchmark(run_50k, len, obj)


@pytest.mark.benchmark(group="iter")
@pytest.mark.parametrize("obj", [small_struct, large_struct], ids=["small", "large"])
def test_iter(benchmark: BenchmarkFixture, obj) -> None:
    benchmark(run_50k, consume_iter, obj)


@pytest.mark.benchmark(group="items")
@pytest.mark.parametrize("obj", [small_struct, large_struct], ids=["small", "large"])
def test_items(benchmark: BenchmarkFixture, obj) -> None:
    benchmark(run_50k, consume_items, obj)


@pytest.mark.benchmark(group="values")
@pytest.mark.parametrize("obj", [small_struct, large_struct], ids=["small", "large"])
def test_values(benchmark: BenchmarkFixture, obj) -> None:
    benchmark(run_50k, consume_values, obj)


@pytest.mark.benchmark(group="hash")
def test_hash(benchmark: BenchmarkFixture) -> None:
    benchmark(run_50k, hash, frozen_struct)


@pytest.mark.benchmark(group="decode")
def test_json_decode(benchmark: BenchmarkFixture) -> None:
    benchmark(run_10k, json.decode, json_payload, type=JsonStruct)
