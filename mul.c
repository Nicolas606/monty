#include "monty.h"

/**
 * mul - function  multiplies the second top element of the stack with the
 * top element of the stack.
 *
 * @head: number the stack
 * @line: number the line that execute program
 *
 */

void mul(stack_t **head, unsigned int line)
{
	stack_t *copy = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		free_stack();
		dprintf(STDERR_FILENO, "L%u: can't mul, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	(*head) = (*head)->next;
	(*head)->prev = NULL;
	(*head)->n = (*head)->n * copy->n;
	free(copy);
}
