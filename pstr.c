#include "monty.h"

/**
 * pstr - Function prints the string starting at the top of the stack,
 * followed by a new line.
 *
 * @head: number the stack
 * @line: number the line that execute program
 *
 */

void pstr(stack_t **head, unsigned int line)
{
	stack_t *copy = *head;
	(void)line;

	if (head == NULL || (*head) == NULL)
		printf("\n");
	while (copy != NULL)
	{
		if (copy->n <= 0 || copy->n > 127)
		{
			break;
		}
		printf("%c", (*head)->n);
		copy = copy->next;
	}
	printf("\n");
}
