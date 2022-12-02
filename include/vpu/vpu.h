#include "vpu/vdt.h"

#ifndef _VIRTUAL_PROCESSOR_UNIT_H_
#define _VIRTUAL_PROCESSOR_UNIT_H_

#define GENERAL_REGISTERS 16
#define SYSCALL_REGISTERS 8

typedef struct segment_registers
{
    void *cs; // Code segment
    void *ds; // Data segment
    void *es; // Extra segment
    void *fs; // File segment
    void *gs; // Global segment
    void *ss; // Stack segment
} segment_registers_t;

typedef struct vpu
{
    u32 gpr[GENERAL_REGISTERS]; // General purpose registers
    u32 scr[SYSCALL_REGISTERS]; // System call registers
    segment_registers_t sgr;    // Segment registers
    u32 ip;                     // Instruction pointer
    u32 sp;                     // Stack pointer
    u32 bp;                     // Base pointer
    u32 flags;                  // Flags
    vdt_entry_t gdtr;           // Global descriptor table register
    selector_t ldtr;            // Local descriptor table register
} vpu_t;

#endif /* !_VIRTUAL_PROCESSOR_UNIT_H_ */