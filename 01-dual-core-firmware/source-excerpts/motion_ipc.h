#ifndef MOTION_IPC_H
#define MOTION_IPC_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MOTION_IPC_SERVICE_NAME "motion_ipc"
#define MOTION_IPC_VERSION      (1U)
#define MOTION_IPC_PAYLOAD_WORDS 8U

typedef enum
{
    MOTION_IPC_NONE = 0,
    MOTION_IPC_HEARTBEAT_REQ = 1,
    MOTION_IPC_HEARTBEAT_REPLY = 2,
    MOTION_IPC_RING_STATUS_REQ = 3,
    MOTION_IPC_RING_STATUS_REPLY = 4,
    MOTION_IPC_START_SEGMENT = 5,
    MOTION_IPC_STOP_SEGMENT = 6,
    MOTION_IPC_CLEAR_STATS = 7,
    MOTION_IPC_FAULT = 8
} MotionIpcType;

typedef struct __attribute__((packed, aligned(4)))
{
    uint32_t magic;      /* 'MIPC' */
    uint16_t version;    /* protocol version, start at 1 */
    uint16_t type;       /* MotionIpcType */
    uint32_t seq;        /* message sequence */
    uint32_t arg[MOTION_IPC_PAYLOAD_WORDS];
} MotionIpcMessage;

void MotionIPC_Fill(MotionIpcMessage *m, MotionIpcType type, uint32_t seq);
int  MotionIPC_IsValid(const MotionIpcMessage *m, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif /* MOTION_IPC_H */
