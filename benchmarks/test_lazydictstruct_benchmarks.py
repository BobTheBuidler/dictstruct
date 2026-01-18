import operator

import pytest

pytest.importorskip("pytest_codspeed")
from msgspec import json
from pytest_codspeed import BenchmarkFixture

from benchmarks.utils import run_10k, run_50k, consume_items, consume_iter, consume_values
from benchmarks.data import LazyStruct, lazy_payload, lazy_struct


@pytest.mark.benchmark(group="lazy-contains")
@pytest.mark.parametrize("key", ["field1", "missing"], ids=["hit", "miss"])
def test_contains(benchmark: BenchmarkFixture, key: str) -> None:
    benchmark(run_50k, operator.contains, lazy_struct, key)


@pytest.mark.benchmark(group="lazy-get")
@pytest.mark.parametrize("key", ["field1", "missing"], ids=["hit", "miss"] )
def test_get(benchmark: BenchmarkFixture, key: str) -> None:
    benchmark(run_50k, lazy_struct.get, key, "default")


@pytest.mark.benchmark(group="lazy-getitem")
def test_getitem(benchmark: BenchmarkFixture) -> None:
    benchmark(run_50k, operator.getitem, lazy_struct, "field1")


@pytest.mark.benchmark(group="lazy-iter")
def test_iter(benchmark: BenchmarkFixture) -> None:
    benchmark(run_50k, consume_iter, lazy_struct)


@pytest.mark.benchmark(group="lazy-items")
def test_items(benchmark: BenchmarkFixture) -> None:
    benchmark(run_50k, consume_items, lazy_struct)


@pytest.mark.benchmark(group="lazy-values")
def test_values(benchmark: BenchmarkFixture) -> None:
    benchmark(run_50k, consume_values, lazy_struct)


@pytest.mark.benchmark(group="lazy-attr")
@pytest.mark.parametrize("attr", ["field1", "field2", "field3"], ids=["int", "str", "list"])
def test_attribute_access(benchmark: BenchmarkFixture, attr: str) -> None:
    getter = operator.attrgetter(attr)
    benchmark(run_50k, getter, lazy_struct)


@pytest.mark.benchmark(group="lazy-decode")
def test_json_decode(benchmark: BenchmarkFixture) -> None:
    benchmark(run_10k, json.decode, lazy_payload, type=LazyStruct)
