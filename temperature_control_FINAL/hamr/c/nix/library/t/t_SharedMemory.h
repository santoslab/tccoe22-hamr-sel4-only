#ifndef SIREUM_H_t_SharedMemory
#define SIREUM_H_t_SharedMemory

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit t_SharedMemory_receive(STACK_FRAME Z port, MBox2_1CBFC4 out);

Unit t_SharedMemory_receiveAsync(STACK_FRAME Z port, MBox2_1029D1 out);

Z t_SharedMemory_create(STACK_FRAME Z id);

B t_SharedMemory_sendAsync(STACK_FRAME Z id, Z port, art_DataContent d);

Unit t_SharedMemory_remove(STACK_FRAME Z id);

#ifdef __cplusplus
}
#endif

#endif