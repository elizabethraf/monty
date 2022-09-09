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
	{"add", op_add},
	{"nop", op_nop},
	{"sub", op_sub},
	{"div", op_div},
	{"mul", op_mul},
	{"mod", op_mod},
	{"pchar", op_pchar},
	{"pstr", op_pstr},
	{"rotl", op_rotl},
	{"rotr", op_rotr},
	{"queue", op_queue},
	{"stack", op_stack},

	{NULL, NULL}
	};
	int i;

	i = 0;
	while (insts[i].opcode != NULL && *insts[i].op != *str)
		i++;

	insts[i].f;
}
