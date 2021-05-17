#include "monty.h"

/**
 * opcode_function - funtion the open file
 *
 * @opcode: name of the opcode
 * @n: number the stack
 * @line_n: number the line the function
 *
 */

void opcode_function(char *opcode, char *n, unsigned int line_n)
{
	int i, find = 0;

	instruction_t array[] = {
			{"push", push},
			{"pall", pall},
			{"pint", pint},
			{"pop", pop},
			{"swap", swap},
			{"add", add},
			{"nop", nop},
			{"sub", sub},
			{"div", divided},
			{"mul", mul},
			{"mod", mod},
			{"pchar", pchar},
			{"pstr", pstr},
			{NULL, NULL}};
	for (i = 0; array[i].opcode; i++)
	{
		if (strcmp(opcode, array[i].opcode) == 0)
		{
			find = i;
			break;
		}
	}
	if (find != i)
	{
		free_stack();
		dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n", line_n, opcode);
		exit(EXIT_FAILURE);
	}
	if (find == 0)
		new_node(n, line_n);
	else
		array[find].f(&head, line_n);
}
