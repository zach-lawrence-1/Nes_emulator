#ifndef CPU
#define CPU

/*
These are temporary TODOs and notes for myself
TODO: define needed variables that will be used in class and figure out data types for them
    - x register (8 bits)
    - y register (8 bits)
    - accumulator (8 bits)
    - program counter (16 bits)
    - stack pointer (8 bits)
    - clock cycle count
    - status flags

TODO: Figure out how bus will interact with all components
    - CPU
    - PPU
    - APU
    - RAM
    - Cartridge data

TODO: Create functions for analyzing and running incoming cpu instructions
TODO: Implement flag handling
TODO: Implement clock timing
TODO: Implement cpu interupts

NOTES: Each instruction may need more or less clock cycles to complete EX: CLC is a 1 byte instruction, 
LDA $41 is a 2 byte instruction, and LDA $0105 is a 3 byte instruction. So when calling an instruction,
we need to emulate function, addressing mode and clock cycles it takes to implement the corresponding instruction.
This means we should not just use a giant switch case, one option is to represent instructions in a 16x16 matrix
like one in the 6502 datasheet but there can be other options.

For now, I will implement the cpu and bus to work with some allocated ram. It should be able to properly
execute programs written in 6502 assembly.
*/

//6502 cpu implementation
class cpu
{
    private:
        
    public:
        
};

#endif