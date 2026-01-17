from msgspec import Raw, field, json

from dictstruct._lazy import LazyDictStruct
from dictstruct._main import DictStruct


class VisibilityStruct(DictStruct):
    field1: str
    field2: int


class VisibilityLazyStruct(LazyDictStruct):
    _field1: Raw = field(name="field1")
    _field2: Raw = field(name="field2")

    @property
    def field1(self) -> str:
        return json.decode(self._field1, type=str)

    @property
    def field2(self) -> int:
        return json.decode(self._field2, type=int)


def test_struct_fields_register_and_init():
    fields = VisibilityStruct.__struct_fields__
    assert (
        "field1" in fields and "field2" in fields
    ), "DictStruct subclasses must register annotated fields at runtime."
    instance = VisibilityStruct(field1="value", field2=42)
    assert instance.field1 == "value"
    assert instance.field2 == 42


def test_lazy_struct_fields_register_and_decode():
    fields = VisibilityLazyStruct.__struct_fields__
    assert (
        "field1" in fields and "field2" in fields
    ), "LazyDictStruct subclasses must materialize underscored fields."
    data = b'{"field1": "value", "field2": 42}'
    instance = json.decode(data, type=VisibilityLazyStruct)
    assert instance.field1 == "value"
    assert instance.field2 == 42
