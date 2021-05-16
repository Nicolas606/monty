#include "monty.h"

/**
 * pop - removes the top element of the stack.
 *
 * @head: number the stack
 * @line: number the line that execute program
 *
 */

void pop(stack_t **head, unsigned int line)
{
	stack_t *copy = *head;

	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L %u: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}

	if ((*head)->next != NULL)
	{
		copy = copy->next;
		copy->prev = (*head)->prev;
		(*head) = copy;
	}
	else
		exit(EXIT_SUCCESS);
}
