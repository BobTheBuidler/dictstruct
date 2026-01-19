from msgspec import UNSET, Raw, field, json

from dictstruct import DictStruct, LazyDictStruct


class SmallStruct(DictStruct):
    field1: int
    field2: str
    field3: int
    field4: str = UNSET
    field5: int = UNSET


class LargeStruct(DictStruct):
    field1: int
    field2: str
    field3: int
    field4: str
    field5: int
    field6: str
    field7: int
    field8: str
    field9: int
    field10: str
    field11: int = UNSET
    field12: str = UNSET


class FrozenStruct(DictStruct, frozen=True):
    field1: int
    field2: tuple[int, int]
    field3: str


class JsonStruct(DictStruct):
    field1: int
    field2: str
    field3: list[int]
    field4: int = UNSET


class LazyStruct(LazyDictStruct):
    _field1: Raw = field(name="field1")
    _field2: Raw = field(name="field2")
    _field3: Raw = field(name="field3")
    _field4: Raw = field(name="field4")

    @property
    def field1(self) -> int:
        return json.decode(self._field1, type=int)

    @property
    def field2(self) -> str:
        return json.decode(self._field2, type=str)

    @property
    def field3(self) -> list[int]:
        return json.decode(self._field3, type=list[int])

    @property
    def field4(self) -> dict[str, int]:
        return json.decode(self._field4, type=dict[str, int])


small_struct = SmallStruct(field1=1, field2="value", field3=3)
large_struct = LargeStruct(
    field1=1,
    field2="a",
    field3=3,
    field4="b",
    field5=5,
    field6="c",
    field7=7,
    field8="d",
    field9=9,
    field10="e",
)

frozen_struct = FrozenStruct(field1=1, field2=(1, 2), field3="value")

json_payload = json.encode({"field1": 1, "field2": "value", "field3": [1, 2, 3, 4]})

lazy_payload = json.encode(
    {
        "field1": 1,
        "field2": "value",
        "field3": [1, 2, 3, 4],
        "field4": {"a": 1, "b": 2},
    }
)

lazy_struct = json.decode(lazy_payload, type=LazyStruct)
