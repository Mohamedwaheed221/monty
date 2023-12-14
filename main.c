#include "monty.h"

/**
 * main - main function
 *
 * @argc: no. of arguments
 * @argv: argument vector
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	stack_t *stack = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "Monty");
		exit(EXIT_FAILURE);
	}
	open_file(argv[1], &stack);

	return (0);
}
