from typing import Any, Callable

def run_50k(func: Callable[..., Any], *args: Any, **kwargs: Any) -> None:
    for _ in range(50_000):
        func(*args, **kwargs)

def run_10k(func: Callable[..., Any], *args: Any, **kwargs: Any) -> None:
    for _ in range(10_000):
        func(*args, **kwargs)

def consume_iter(obj) -> None:
    for _ in obj:
        pass

def consume_items(obj) -> None:
    for _ in obj.items():
        pass

def consume_values(obj) -> None:
    for _ in obj.values():
        pass


def consume_keys(obj) -> None:
    for _ in obj.keys():
        pass
