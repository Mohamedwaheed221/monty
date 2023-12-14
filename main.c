#include "monty.h"

/**
 *
 */
int main(void)
{
	stack_t *stack = NULL;
	push(&stack, 1, 3);
	push(&stack, 2, 5);
	pall(&stack, 3);

	return 0;
}
