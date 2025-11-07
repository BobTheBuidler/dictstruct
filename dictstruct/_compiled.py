from typing import TYPE_CHECKING

if TYPE_CHECKING:
  from dictstruct._main import DictStruct


_DS = TypeVar("_DS", bound="DictStruct")


def __contains__(self: _DS, key: str) -> bool:
    """
    Check if a key is in the struct.

    Args:
        key: The key to check.

    Returns:
        True if the key is present and not :obj:`~msgspec.UNSET`, False otherwise.

    Example:
        >>> class MyStruct(DictStruct):
        ...     field1: str
        >>> s = MyStruct(field1="value")
        >>> 'field1' in s
        True
        >>> 'field2' in s
        False
    """
    return key in self.__struct_fields__ and getattr(self, key, UNSET) is not UNSET
