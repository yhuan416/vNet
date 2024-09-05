#ifndef _V_NET_H_
#define _V_NET_H_

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "ikcp.h"

typedef struct _vNet
{
    ikcpcb *kcp;
} vNet;

/**
 * @brief 主动连接对端
 * 
 * @param net [in|out] vNet对象
 * @param peer [in] 对端地址描述: tcp:0.0.0.0:80 | udp:127.0.0.1:53 | uart:/dev/ttyS0:115200
 * @return int32_t 0:成功; -1:失败
 */
int32_t vNetConnect(vNet *net, const char *peer);

void vNetClose(vNet *net);

int32_t vNetSend(vNet *net, const uint8_t *data, uint32_t len);

int32_t vNetRecv(vNet *net, uint8_t *data, uint32_t len);

#endif // _V_NET_H_
