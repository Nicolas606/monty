#include "monty.h"

/**
 * mod- function computes the rest of the division of the second top
 * element of the stack by the top element of the stack.
 *
 * @head: number the stack
 * @line: number the line that execute program
 *
 */

void mod(stack_t **head, unsigned int line)
{
	stack_t *copy = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		free_stack();
		dprintf(STDERR_FILENO, "L%u: can't mod, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0)
	{
		dprintf(STDERR_FILENO, "L%u: division by zero\n", line);
		exit(EXIT_FAILURE);
	}
	(*head) = (*head)->next;
	(*head)->prev = NULL;
	(*head)->n = (*head)->n % copy->n;
	free(copy);
}
