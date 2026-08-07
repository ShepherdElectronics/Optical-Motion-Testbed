#include "../shared_ring.h"
#include "../motion_ipc.h"

_Static_assert(MOTION_IPC_VERSION <= UINT16_MAX,
               "Motion IPC version must fit the published uint16_t field");
_Static_assert(sizeof(MotionIpcMessage) == 44U,
               "Published MotionIpcMessage wire size changed");
_Static_assert(sizeof(MotionSharedRing) == MOTIONIPC_RAW_RING_BYTES,
               "Shared ring must exactly fit the 256 KiB public reservation");

int main(void)
{
    return 0;
}
