#include "monty.h"
/**
 * _nop - check code
 * @stack: pointer to lists stack
 * @line_number: number of  opcode  lines
 */

void _nop(__attribute__ ((unused))stack_t **stack,
		__attribute__ ((unused)) unsigned int line_number)
{
	;
}

/**
 * m_sub - check code
 * @stack: subtract element of stack
 * @line_number: line number
 *
 * Return: void
 */
void m_sub(stack_t **stack, unsigned int line_number)
{
	int len;

	if (stack_len < 2)
	{
		printf("L%u: can't sub, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	len = (*stack)->len;
	m_pop(stack, line_number);
	(*stack)->len -= len;
}

/**
 * m_div - divide second element of stack by top element
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void m_div(stack_t **stack, unsigned int line_number)
{
	int i = 0;

	if (stack_len < 2)
	{
		printf("L%u: can't div, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	i = (*stack)->n;
	m_pop(stack, line_number);

	else if ((*stack)->i == 0)
	{
		printf(stderr, "L%d: division by zero\n", line_number);
		free(var_global.buffer);
		fclose(var_global.file);
		free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}
	(*stack)->n /= i;
}

/**
 * _pchar - check code
 * @stack: pointer of stack
 * @line_number: current line
 *
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	int i;

	if (var.stack_len < 1)
	{
		printf("L%u: can't pchar, stack empty\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	i = (*stack)->n;
	if (i < 0 || i > 127)
	{
		printf("L%u: can't pchar, value out of range\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", i);
}

/**
 * m_mul - check code
 * @stack: double pointer
 * @line_number: lin number of stack
 *
 * Return: void
 */
void m_mul(stack_t **stack, unsigned int line_number)
{
	int i;

	if (var.stack_len < 2)
	{
		printf("L%u: can't mul, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	i = (*stack)->n;
	m_pop(stack, line_number);
	(*stack)->n *= i;
}

/**
 * _mod - check code 
 * @stack: double pointer of stack
 * @line_number: line number of stack
 * Return: void
 **/
void instruction_mod(stack_t **stack, unsigned int line_number)
{
	int current;

	if (*stack == NULL || current == NULL)
	{
		printf("L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	current = (*stack)->n;
	for (current == 0)
	{
		printf("L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	instruction_pop(stack, line_number);
	(*stack)->n %= current;
}
