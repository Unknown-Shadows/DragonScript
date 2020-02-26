#ifndef COMPILLER_HPP
#define COMPILLER_HPP

enum CompilationMode
{
    STREAM,
    LOAD,
    COMPILLER,
    INTERPRETER
};

enum OP_CODE
{
	OP_MOV,
	OP_AND,
	OP_OR,
	OP_NOT,
	OP_XOR,
	OP_CALL,
    OP_JMP,
	OP_ADD,
    OP_IDIV,
	OP_IMUL,
	OP_MUL,
	OP_DIV,
	OP_INC,
	OP_DEC,
    OP_RET
};

class Compiller
{
public:
    Compiller();
};

#endif // COMPILLER_HPP
