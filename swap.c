#include "monty.h"

/**
 * swap - function  swaps the top two elements of the stack.
 *
 * @head: number the stack
 * @line: number the line that execute program
 *
 */

void swap(stack_t **head, unsigned int line)
{
	stack_t *copy = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L %u: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	else
	{
		(*head) = copy->next;
		(*head)->prev = copy->prev;
		copy->next = (*head)->next;
		(*head)->next = copy;
		copy->prev = (*head);
	}
}
