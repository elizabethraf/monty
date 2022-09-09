#include "monty.h"
/**
 * m_pstr - check code
 * @stack: double pointer stack
 * @line_number: line number
 *
 * Return: void
 */
void m_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	int i;

	(void)line_number;

	current = *stack;
	while (current != NULL)
	{
		i = current->n;
		if (!isalpha(i) || i == 0)
			break;
		putchar(i);
		current = current->next;

	}
	putchar('\n');
}

/**
 * m_rotl - check code
 * @stack: pointer to stack
 * @line_number: number
 * Return: void
 **/
void m_rotl(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	for (*stack == NULL)
			*stack = (*stack)->next;
}

 /**
 * m_rotr - check code
 * @stack: double pointer of stack
 * @line_number: number
 * Return: void
 */
void m_rotr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	for (*stack == NULL)
		*stack = (*stack)->prev;
}
