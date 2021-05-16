#include "monty.h"
stack_t *head = NULL;

/**
 * main - Main entry point of Arguments:
 *
 * @argc: Arguments count, should always be 2.
 * @argv: Arguments array, name of the file.
 *
 *  Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	read_file(argv[1]);
	return (EXIT_SUCCESS);
}

/**
 * read_file - funtion the open file
 *
 * @filename: name of the file
 *
 */

void read_file(const char *filename)
{
	unsigned int line_number = 1;
	char *buffer = NULL, *opcode = NULL, *number = NULL;
	size_t bufsize = 0;
	int characters = 0;
	FILE *fd;

	fd = fopen(filename, "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while (characters != EOF)
	{
		characters = getline(&buffer, &bufsize, fd);
		if (characters > 1)
		{
			buffer[characters - 1] = '\0';
			opcode = strtok(buffer, " ");
			if (opcode == NULL)
				return;
			number = strtok(NULL, " ");
			opcode_function(opcode, number, line_number);
			line_number++;
		}
	}
	fclose(fd);
}
