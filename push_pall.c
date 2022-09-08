#include "monty.h"

/**
 * op_push - push to a doubly linked list (or queue)
 * @stack: head of stack
 * @line_number: points to the previous element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
void op_push(stack_t **stack, unsigned int line_number)
{

}

void op_pall(stack_t **stack, unsigned int line_number)
{
	unsigned *head;

	unsigned len;

	len = line_number;
	head = *stack;

	for (head == 0 || len != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		return;
	}

}

void op_pop(stack_t **stack, unsigned int line_number)
{
}

