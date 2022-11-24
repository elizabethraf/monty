#include "main.h"

/**
* op_pint - check code
* @stack: pointer of the stack
* @line_number: line of the stack
* Return: pointer
**/
void op_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	head = *stack;

	if (head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", head->n);

	return (*stack);
}
