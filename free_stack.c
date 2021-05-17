#include "monty.h"

/**
 * free_stack - function free the stack.
 *
 */

void free_stack(void)
{
	stack_t *copy;

	while (head)
	{
		copy = head;
		head = head->next;
		free(copy);
	}
}
