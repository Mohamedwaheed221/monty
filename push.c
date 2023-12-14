#include "monty.h"

/**
 * push - function to push the element in the stack
 * @stack: linked list to the stack
 * @line_number: numbers of element enter
 * @n: integer
 */
void push(stack_t **stack, unsigned int line_number, int n)
{
	stack_t *node = malloc(sizeof(stack_t));

	if (!node)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	node->n = n;
	node->prev = NULL;
	node->next = *stack;

	if (*stack)
	{
		(*stack)->prev = node;
	}
	*stack = node;
}

/**
 * pall - function to print the oushed item
 * @stack: pointer to the linked list
 * @line_number: numbers of element enter
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;

	(void)line_number;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
