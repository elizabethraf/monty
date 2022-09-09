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
	stack_t *element = malloc(sizeof(stack_t));
	char *op;
	int len;

	if (head == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	op = strtok(NULL, DELIMS);
	if (stack == NULL || op == NULL)
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	len = _strtol(op, line_number);
	head->n = num;
	head->prev = NULL;
	head->next = *stack;
	if (head->next != NULL)
		(head->next)->prev = head;
	*stack = head;

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
	stack_t *head;

	if (stack == 0 || *stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	head  = *stack;
	(*stack = *stack)->next;
	free(head);
}

void instruction_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	unsigned int next;

	if (stack_len < 2)
	{
		printf(
			"L%u: can't swap, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	if (var.stack_len == 2)
	{
		*stack = (*stack)->next;
		return;
	}
	head = (*stack)->next;
	head->prev = (*stack)->prev;
	(*stack)->prev->next = head;
	(*stack)->prev = next;
	head->next->prev = *stack;
	head->next = *stack;
}
