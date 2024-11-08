import pytest
from msgspec import Raw, field, json

from dictstruct.main import LazyDictStruct


class MyLazyStruct(LazyDictStruct):
    _field1: Raw = field(name="field1")
    _field2: Raw = field(name="field2")

    @property
    def field1(self) -> str:
        return json.decode(self._field1, type=str)

    @property
    def field2(self) -> int:
        return json.decode(self._field2, type=int)


@pytest.fixture
def my_lazy_struct() -> MyLazyStruct:
    data = b'{"field1": "value", "field2": 42}'
    return json.decode(data, type=MyLazyStruct)


def test_contains(my_lazy_struct):
    assert "field1" in my_lazy_struct
    assert "field3" not in my_lazy_struct


def test_get(my_lazy_struct):
    assert my_lazy_struct.get("field1") == "value"
    assert my_lazy_struct.get("field3", "default") == "default"


def test_getitem(my_lazy_struct):
    assert my_lazy_struct["field1"] == "value"
    with pytest.raises(KeyError):
        _ = my_lazy_struct["field3"]


def test_getattribute(my_lazy_struct):
    assert my_lazy_struct.field1 == "value"
    with pytest.raises(AttributeError):
        _ = my_lazy_struct.field3


def test_iter(my_lazy_struct):
    keys = list(my_lazy_struct)
    assert "field1" in keys
    assert "field2" in keys


def test_len(my_lazy_struct):
    assert len(my_lazy_struct) == 2


def test_keys(my_lazy_struct):
    keys = list(my_lazy_struct.keys())
    assert "field1" in keys
    assert "field2" in keys


def test_items(my_lazy_struct):
    items = list(my_lazy_struct.items())
    assert ("field1", "value") in items
    assert ("field2", 42) in items


def test_values(my_lazy_struct):
    values = list(my_lazy_struct.values())
    assert "value" in values
    assert 42 in values


def test_hash(my_lazy_struct):
    assert isinstance(hash(my_lazy_struct), int)
