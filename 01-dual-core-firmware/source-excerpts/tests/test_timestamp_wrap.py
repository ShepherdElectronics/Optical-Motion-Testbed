import importlib.util
from pathlib import Path

MODULE = Path(__file__).resolve().parents[1] / "timestamp_unwrap.py"
spec = importlib.util.spec_from_file_location("timestamp_unwrap", MODULE)
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)


def test_wrap_crossing():
    stamps = [0xFFFFFF00, 0xFFFFFFF0, 0x00000020, 0x00000120]
    unwrapped = mod.unwrap_u32_microseconds(stamps)
    assert unwrapped == [
        0xFFFFFF00,
        0xFFFFFFF0,
        0x100000020,
        0x100000120,
    ]
    assert all(b > a for a, b in zip(unwrapped, unwrapped[1:]))


def test_modular_delta():
    assert mod.delta_u32_us(0x20, 0xFFFFFFF0) == 0x30


if __name__ == "__main__":
    test_wrap_crossing()
    test_modular_delta()
    print("timestamp wrap tests: PASS")
