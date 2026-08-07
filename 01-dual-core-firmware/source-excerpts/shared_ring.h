#ifndef SHARED_RING_H
#define SHARED_RING_H

#include <stdint.h>
#include <stddef.h>
#include "memory_map_motionipc.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Keep each sample on a 32-byte boundary for the Cortex-M7 cache-line policy. */
typedef struct __attribute__((packed, aligned(32)))
{
    uint32_t seq;
    uint32_t t_us;
    int32_t  encoder_count;
    int32_t  position_mdeg;
    int32_t  target_speed_mdeg_s;
    int32_t  measured_speed_mdeg_s;
    int32_t  error_mdeg;
    uint16_t state;
    uint16_t flags;
    uint32_t reserved0;
} MotionRawSample;

typedef struct __attribute__((aligned(32)))
{
    volatile uint32_t magic;
    volatile uint32_t capacity;
    volatile uint32_t write_idx;
    volatile uint32_t read_idx;
    volatile uint32_t seq_next;
    volatile uint32_t drops;
    volatile uint32_t m7_heartbeat;
    volatile uint32_t m4_heartbeat;
    volatile uint32_t m7_fault_flags;
    volatile uint32_t m4_fault_flags;
    volatile uint32_t samples_read;
    volatile uint32_t seq_gaps;
    volatile uint32_t last_seq_read;
    volatile uint32_t reserved[3];
    MotionRawSample samples[MOTIONIPC_RING_CAPACITY];
} MotionSharedRing;

#if defined(__cplusplus)
static_assert(sizeof(MotionRawSample) == 64U,
              "MotionRawSample must remain 64 bytes");
static_assert(offsetof(MotionSharedRing, samples) == 64U,
              "MotionSharedRing metadata must remain 64 bytes");
static_assert(sizeof(MotionSharedRing) <= MOTIONIPC_RAW_RING_BYTES,
              "MotionSharedRing exceeds reserved AXI SRAM region");
#else
_Static_assert(sizeof(MotionRawSample) == 64U,
               "MotionRawSample must remain 64 bytes");
_Static_assert(offsetof(MotionSharedRing, samples) == 64U,
               "MotionSharedRing metadata must remain 64 bytes");
_Static_assert(sizeof(MotionSharedRing) <= MOTIONIPC_RAW_RING_BYTES,
               "MotionSharedRing exceeds reserved AXI SRAM region");
#endif

#define MOTION_SHARED_RING ((MotionSharedRing *)MOTIONIPC_RAW_RING_BASE)

void MotionRing_InitProducer_CM7(void);
void MotionRing_WriteSample_CM7(const MotionRawSample *sample);
void MotionRing_Heartbeat_CM7(void);

void MotionRing_InitConsumer_CM4(void);
int  MotionRing_ReadSample_CM4(MotionRawSample *out_sample);
void MotionRing_Heartbeat_CM4(void);

#ifdef __cplusplus
}
#endif

#endif /* SHARED_RING_H */
