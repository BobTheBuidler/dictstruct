from typing import Any, Callable

def run_50k(func: Callable[..., Any], *args: Any, **kwargs: Any) -> None:
    for _ in range(50_000):
        func(*args, **kwargs)

def run_10k(func: Callable[..., Any], *args: Any, **kwargs: Any) -> None:
    for _ in range(10_000):
        func(*args, **kwargs)
