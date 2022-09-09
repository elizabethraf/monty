#include "monty.h"

/**
 * m_add - check code
 * @stack: double pointer
 * @line_number: script line number
 *
 * Return: void
 */
void m_add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (sum == NULL)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't add, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	sum += (*stack)->sum;
	m_pop(stack, line_number);
	(*stack)->sum += sum;
}
