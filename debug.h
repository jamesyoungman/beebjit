#ifndef BEEBJIT_DEBUG_H
#define BEEBJIT_DEBUG_H

#include <stdint.h>

struct bbc_struct;

struct cpu_driver;

struct debug_struct* debug_create(struct bbc_struct* p_bbc,
                                  int debug_active,
                                  int32_t debug_stop_addr);
/* debug_init() is called after the cpu_driver is set up. */
void debug_init(struct debug_struct* p_debug);
void debug_destroy(struct debug_struct* p_debug);

int debug_subsystem_active(void* p);
int debug_active_at_addr(void* p, uint16_t addr_6502);

void* debug_callback(struct cpu_driver* p_cpu_driver, int do_irq);

#endif /* BEEBJIT_DEBUG_H */
