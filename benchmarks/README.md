# Benchmarks for dictstruct

This directory contains benchmarks for core `DictStruct` and `LazyDictStruct` behavior, focused on:

- Dict-like operations (`__contains__`, `get`, `__getitem__`, iteration)
- Iteration helpers (`keys`, `items`, `values`)
- Decoding with msgspec for normal and lazy structs

## Benchmark Files

- `test_dictstruct_benchmarks.py`: DictStruct operations and JSON decoding.
- `test_lazydictstruct_benchmarks.py`: LazyDictStruct operations and lazy field access.
- `data.py`: Shared test data and sample struct definitions.
- `batch.py`: Small helper to batch repeated calls.

## Running Benchmarks

Install the package and codspeed dependencies:

```
pip install . -r requirements-codspeed.txt
```

Run all benchmarks with pytest-codspeed:

```
pytest --codspeed benchmarks/
```
