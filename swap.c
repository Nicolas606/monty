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
	int i;

	if (*head == NULL || (*head)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	else
	{
		copy = (*head)->next;
		i = (*head)->n;
		(*head)->n = copy->n;
		copy->n = i;
	}
}
