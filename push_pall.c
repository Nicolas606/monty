#include "monty.h"

/**
 * push - funtion pushes an element to the stack.
 *
 * @head: number the stack
 * @line: number the line that execute program
 *
 */

void push(stack_t **head, unsigned int line)
{
	if (head && line)
	{
		;
	}
}

/**
 * pall - funtion prints all the values on the stack, starting from the top of
 * the stack.
 *
 * @head: pointer the head
 * @line: number the line that execute program
 *
 */

void pall(stack_t **head, unsigned int line)
{
	stack_t *copy = *head;
	(void)line;

	if (head == NULL || *head == NULL)
	{
		exit(EXIT_SUCCESS);
	}

	while (copy)
	{
		printf("%u\n", copy->n);
		copy = copy->next;
	}

}
