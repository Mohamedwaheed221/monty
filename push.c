#include "monty.h"

/**
 * push - function to push the element in the stack
 * @stack: linked list to the stack
 */
void push(stack_t **stack)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
	{
		exit(EXIT_FAILURE);
	}
	if (head == NULL)
	{
		head = *stack;
		return;
	}
	temp = head;
	head = *stack;
	head->next = temp;
	temp->prev = head;
}

/**
 * pall - function to print the oushed item
 * @stack: pointer to the linked list
 */
void pall(stack_t **stack)
{
	stack_t *temp;

	if (stack == NULL)
	{
		exit(EXIT_FAILURE);
	}
	temp = *stack;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
