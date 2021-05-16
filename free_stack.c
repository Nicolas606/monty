#include "monty.h"

/**
 * free_stack - function free the stack.
 *
 * @head: number the stack
 * @line: number the line that execute program
 *
 */

void free_stack(void)
{
	while (head)
	{
		head = head->next;
		free(head->prev);
	}
}
