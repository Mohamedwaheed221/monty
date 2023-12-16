#include "monty.h"
/**
 * *create_stack - function to create a stack
 * @n: stack(node) to be created
 *
 * Return: stack
 */

stack_t *create_stack(int n)
{
	stack_t *stack;

	stack = malloc(sizeof(stack_t));
	if (stack == NULL)
		fprintf(stderr, "Memory allocation fail\n");
	stack->next = NULL;
	stack->prev = NULL;
	stack->n = n;
	return (stack);
}
