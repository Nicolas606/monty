#include "monty.h"

/**
 * pint - funtion prints the value at the top of the stack, followed by a
 * new line.
 *
 * @head: number the stack
 * @line: number the line that execute program
 *
 */

void pint(stack_t **head, unsigned int line)
{
	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L %u: can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}

	printf("%u\n", (*head)->n);
	}

