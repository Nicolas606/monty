#include "monty.h"

/**
 * pchar - Function prints the char at the top of the stack, followed by a
 * new line.
 *
 * @head: number the stack
 * @line: number the line that execute program
 *
 */

void pchar(stack_t **head, unsigned int line)
{
	if (head == NULL || *head == NULL)
	{
		free_stack();
		dprintf(STDERR_FILENO, "L%u: can't pchar, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n < 0 || (*head)->n > 127 )
	{
		{
			free_stack();
			dprintf(STDERR_FILENO, "L%u: can't pchar, value out of range\n", line);
			exit(EXIT_FAILURE);
		}
	}
	printf("%c\n", (*head)->n);
}
