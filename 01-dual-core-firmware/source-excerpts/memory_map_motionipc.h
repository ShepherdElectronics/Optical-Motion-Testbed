#ifndef MEMORY_MAP_MOTIONIPC_H
#define MEMORY_MAP_MOTIONIPC_H

#include <stdint.h>

/*
 * STM32H747 native dual-core memory map for MotionIPC v0.1.
 * Keep ST OpenAMP D3 SRAM layout untouched:
 *   0x38000000 - 0x380003FF : resource table
 *   0x38000400 - 0x3800FFFF : RPMsg / virtio shared memory
 *
 * Use AXI SRAM for the high-rate custom ring buffer.
 * CM7 must mark this region non-cacheable with MPU before D-cache is enabled.
 */
#define MOTIONIPC_CM7_FLASH_BASE        (0x08000000UL)
#define MOTIONIPC_CM4_FLASH_BASE        (0x08100000UL)
#define MOTIONIPC_OPENAMP_RSC_BASE      (0x38000000UL)
#define MOTIONIPC_OPENAMP_SHMEM_BASE    (0x38000400UL)
#define MOTIONIPC_OPENAMP_D3_END        (0x38010000UL)

#define MOTIONIPC_RAW_RING_BASE         (0x24000000UL)
#define MOTIONIPC_RAW_RING_BYTES        (0x00040000UL) /* 256 KB */
#define MOTIONIPC_RAW_RING_END          (MOTIONIPC_RAW_RING_BASE + MOTIONIPC_RAW_RING_BYTES)

#define MOTIONIPC_MAGIC                 (0x4D495043UL) /* "MIPC" */
#define MOTIONIPC_RING_CAPACITY         (4096UL)       /* 4096 x 64B = 256 KB approx */

#endif /* MEMORY_MAP_MOTIONIPC_H */
