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
	{
		printf("\n");
		return;
	}
	while ((*head)->next != NULL)
	{
		if ((*head)->n < 0 || (*head)->n > 127)
		{
			free_stack();
			printf("\n");
			exit(EXIT_FAILURE);
		}
		else if ((*head)->n == 0)
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}
		printf("%c", (*head)->n);
		copy = copy->next;
		*head = copy;
	}
	printf("%c\n", (*head)->n);
}
