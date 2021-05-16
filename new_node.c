#include "monty.h"

/**
 * new_node - funtion the create new nodo
 *
 * @n: number the stack
 * @line_n: number the line the function
 *
 */

void new_node(char *n, int line_n)
{
	int i = 0;
	stack_t *new;

	if (!n)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_n);
		exit(EXIT_FAILURE);
	}

	while (n[i])
	{
		if (isdigit(n[i]) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_n);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: lista vacia\n");
		exit(EXIT_FAILURE);
	}
	new->n = atoi(n);
	new->prev = NULL;
	new->next = head;
	if (head != NULL)
		(head)->prev = new;
	head = new;
}
