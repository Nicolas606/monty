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
		free_stack();
		dprintf(STDERR_FILENO, "L %u: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}

	if ((*head)->next != NULL)
	{
		(*head) = (*head)->next;
		(*head)->prev = copy->prev;
		free(copy);
		return;
	}
}
