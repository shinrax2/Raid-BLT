#ifndef __DISASSEMBLER_H__
#define __DISASSEMBLER_H__

#include <Zydis/Zydis.h>

#include <map>

struct InstructionOperand
{
	ZydisDecodedInstruction Instruction;
	ZydisDecodedOperand Operands[ZYDIS_MAX_OPERAND_COUNT];
};

void Dissassemble(const void *pAddress, size_t size, std::map<uint64_t, InstructionOperand> &instructions);

#endif