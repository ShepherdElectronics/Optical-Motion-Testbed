"""Helpers for reconstructing a monotonic timebase from uint32 microsecond stamps."""

UINT32_MODULUS = 1 << 32
UINT32_MASK = UINT32_MODULUS - 1


def delta_u32_us(new_us: int, old_us: int) -> int:
    """Return modulo-2^32 elapsed microseconds between two uint32 timestamps."""
    return (int(new_us) - int(old_us)) & UINT32_MASK


def unwrap_u32_microseconds(samples):
    """Convert an ordered sequence of uint32 microsecond stamps to monotonic int64 time."""
    values = list(samples)
    if not values:
        return []

    previous = int(values[0]) & UINT32_MASK
    elapsed = previous
    out = [elapsed]

    for value in values[1:]:
        current = int(value) & UINT32_MASK
        elapsed += delta_u32_us(current, previous)
        out.append(elapsed)
        previous = current

    return out
