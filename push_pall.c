#include "monty.h"

/**
 * m_pall - check code
 * @stack: print all values on stack
 * @line_number: execute from script file
 *
 * Return: void
 */
void m_pall(stack_t **stack, unsigned int line_number)
{
	unsigned *val;

	unsigned len;

	len = line_number;
	val = *stack;

	for (val == 0 || len != NULL)
	{
		printf("%d\n", val->n);
		val = val->next;
		return;
	}
}
