#include "monty.h"

/**
 * nop - function doesn´t do anything
 *
 * @head: number the stack
 * @line: number the line that execute program
 *
 */

void free_stack(void)
{
	stack_t *copy = head;

	while (head)
	{
		head = head->next;
		free(copy);
	}
}
