#include "monty.h"

/**
* *get_opfnc - check code
* @s:function that select
* Return: NULL if s does not match
**/
void (*get_opfnc(char *str))(stack_t **stack, unsigned int)
{
	instruction_t insts[] = {
	{"push", op_push},
	{"pall", op_pall},
	{"pint", op_pint},
	{"pop", op_pop},
	{"swap", op_swap},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (insts[i].opcode != NULL && *insts[i].op != *str)
		i++;

	insts[i].f;
}
