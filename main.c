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
	if (argc != 2)
	{
		fprintf(stderr, "Monty\n");
		exit(EXIT_FAILURE);
	}
	open_file(argv[1]);

	return (0);
}
