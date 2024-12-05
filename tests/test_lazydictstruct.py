import pytest
from msgspec import Raw, field, json

from dictstruct._lazy import LazyDictStruct


class MyLazyStruct(LazyDictStruct):
    _field1: Raw = field(name="field1")
    _field2: Raw = field(name="field2")

    @property
    def field1(self) -> str:
        """
        Returns the decoded string representation of _field1.

        This property decodes the raw JSON data stored in `_field1` to a string
        when accessed.

        Example:
            >>> struct = MyLazyStruct(_field1=b'"example"', _field2=b'42')
            >>> struct.field1
            'example'

        See Also:
            :meth:`msgspec.json.decode` for decoding details.
        """
        return json.decode(self._field1, type=str)

    @property
    def field2(self) -> int:
        """
        Returns the decoded integer representation of _field2.

        This property decodes the raw JSON data stored in `_field2` to an integer
        when accessed.

        Example:
            >>> struct = MyLazyStruct(_field1=b'"example"', _field2=b'42')
            >>> struct.field2
            42

        See Also:
            :meth:`msgspec.json.decode` for decoding details.
        """
        return json.decode(self._field2, type=int)


@pytest.fixture
def my_lazy_struct() -> MyLazyStruct:
    """
    Fixture for creating a MyLazyStruct instance.

    This fixture provides an instance of :class:`MyLazyStruct` decoded from raw JSON data.
    It is used in test functions to supply a consistent test object.

    Example:
        def test_example(my_lazy_struct):
            assert my_lazy_struct.field1 == 'value'
            assert my_lazy_struct.field2 == 42
    """
    data = b'{"field1": "value", "field2": 42}'
    return json.decode(data, type=MyLazyStruct)


def test_contains(my_lazy_struct):
    """Test the `in` operator for checking existence of keys."""
    assert "field1" in my_lazy_struct
    assert "field3" not in my_lazy_struct


def test_get(my_lazy_struct):
    """Test the get method for fetching values with a default."""
    assert my_lazy_struct.get("field1") == "value"
    assert my_lazy_struct.get("field3", "default") == "default"


def test_getitem(my_lazy_struct):
    """Test dictionary-style access to struct fields."""
    assert my_lazy_struct["field1"] == "value"
    with pytest.raises(KeyError):
        _ = my_lazy_struct["field3"]


def test_getattribute(my_lazy_struct):
    """Test attribute-style access to struct fields."""
    assert my_lazy_struct.field1 == "value"
    with pytest.raises(AttributeError):
        _ = my_lazy_struct.field3


def test_iter(my_lazy_struct):
    """Test iteration over the struct keys."""
    keys = list(my_lazy_struct)
    assert "field1" in keys
    assert "field2" in keys


def test_len(my_lazy_struct):
    """Test the length of the struct."""
    assert len(my_lazy_struct) == 2


def test_keys(my_lazy_struct):
    """Test the keys method for retrieving struct keys."""
    keys = list(my_lazy_struct.keys())
    assert "field1" in keys
    assert "field2" in keys


def test_items(my_lazy_struct):
    """Test the items method for retrieving key-value pairs."""
    items = list(my_lazy_struct.items())
    assert ("field1", "value") in items
    assert ("field2", 42) in items


def test_values(my_lazy_struct):
    """Test the values method for retrieving field values."""
    values = list(my_lazy_struct.values())
    assert "value" in values
    assert 42 in values


def test_hash(my_lazy_struct):
    """Test the hashability of the struct."""
    assert isinstance(hash(my_lazy_struct), int)
