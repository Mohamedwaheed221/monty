#include "monty.h"

/**
 * push - function to push the element in the stack
 * @stack: linked list to the stack
 * @l_number: line number
 */
void push(stack_t **node, unsigned int l_number)
{
	stack_t *temp;

	(void)l_number;
	if (node == NULL || *node == NULL)
		exit(EXIT_FAILURE);

	if (head == NULL)
	{
		head = *node;
		return;
	}
	temp = head;
	head = *node;
	head->next = temp;
	temp->prev = head;
}

/**
 * pall - function to print the oushed item
 * @stack: pointer to the linked list
 * @l_number: line number
 */
void pall(stack_t **stack, unsigned int l_number)
{
	stack_t *temp;

	(void)l_number;
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
