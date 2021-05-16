#include "monty.h"

/**
 * add - function adds the top two elements of the stack.
 *
 * @head: number the stack
 * @line: number the line that execute program
 *
 */

void add(stack_t **head, unsigned int line)
{
	stack_t *copy = *head;

	if ((*head)->next == NULL)
	{
		fprintf(stderr, "L %u: can't add, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	else
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		(*head)->n = (*head)->n + copy->n;
	}
}
