#include "monty.h"

/**
 * pint - function that prints the value at the top of the stack
 * @stack: pointer to the stack
 * @line_number: number printed
 */

void pint(stack_t **stack, unsigned int l_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", l_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
