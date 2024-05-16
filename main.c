
// Registers representation 

enum {
    R_R0 = 0,
    R_R1,
    R_R2,
    R_R3,
    R_R4,
    R_R5,
    R_R6,
    R_R7,
    R_PC,
    R_FLAG,
    R_NB  // Used to count number of registers
};

// Conditional flags representation 

enum {
    F_POS = 1 << 0,   // Positive (P)
    F_Z = 1 << 2,   // Zero (Z)
    F_NEG = 1 << 3 // Negative (N)
};

// Opcodes representation 

enum { 
    OP_BR = 0,
    OP_ADD,
    OP_LD,
    OP_ST,
    OP_JSR,
    OP_AND,
    OP_LDR,
    OP_STR,
    OP_RTI,
    OP_NOT,
    OP_LDI,
    OP_STI,
    OP_JMP,
    OP_RES,
    OP_LEA,
    OP_TRAP
};