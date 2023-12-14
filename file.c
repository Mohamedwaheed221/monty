#include "monty.h"

/**
 * open_file - function to open the file
 * @file_name: the file to be openned
 */

void open_file(char *file_name)
{
	FILE *file = fopen(file_name, "r");

	if (file_name == NULL || file == NULL)
	{
		printf("Error opening the file....\n");
	}
	read_file(file);
	fclose(file);
}

/**
 * read_file - function to read the file
 * @file: file to be readen
 */

void read_file(FILE *file)
{
	int number = 0;
	char *buffer = NULL;
	size_t length = 0;
	char *token;

	for (number = 1; getline(&buffer, &length, file) != -1; number++)
	{
		token = strtok(buffer, " ");
		while (token != NULL)
		{
			printf("%s\n", token);
			token = strtok(NULL, " ");
		}
	}
	free(buffer);
}