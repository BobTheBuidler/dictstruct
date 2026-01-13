import pytest

from dictstruct._main import DictStruct


class MyStruct(DictStruct):
    field1: str
    field2: int


@pytest.fixture
def my_struct():
    return MyStruct(field1="value", field2=42)


def test_bool(my_struct):
    assert my_struct


def test_contains(my_struct):
    assert "field1" in my_struct
    assert "field3" not in my_struct


def test_get(my_struct):
    assert my_struct.get("field1") == "value"
    assert my_struct.get("field3", "default") == "default"


def test_getitem(my_struct):
    assert my_struct["field1"] == "value"
    with pytest.raises(KeyError):
        _ = my_struct["field3"]


def test_getattribute(my_struct):
    assert my_struct.field1 == "value"
    with pytest.raises(AttributeError):
        _ = my_struct.field3


def test_iter(my_struct):
    keys = list(my_struct)
    assert "field1" in keys
    assert "field2" in keys


def test_len(my_struct):
    assert len(my_struct) == 2


def test_keys(my_struct):
    keys = list(my_struct.keys())
    assert "field1" in keys
    assert "field2" in keys


def test_items(my_struct):
    items = list(my_struct.items())
    assert ("field1", "value") in items
    assert ("field2", 42) in items


def test_values(my_struct):
    values = list(my_struct.values())
    assert "value" in values
    assert 42 in values


def test_hash(my_struct):
    with pytest.raises(TypeError):
        hash(my_struct)
