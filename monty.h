#ifndef MONTY_H
#define MONTY_H
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <ctype.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;

void opcode_function(char *opcode, char *n, unsigned int line_number);

void new_node(char *n, unsigned int line_number);

void read_file(const char *filename);

void push(stack_t **head, unsigned int n);

void pall(stack_t **head, unsigned int line);

void pint(stack_t **head, unsigned int line);

void pop(stack_t **head, unsigned int line);

void swap(stack_t **head, unsigned int line);

void add(stack_t **head, unsigned int line);

void nop(stack_t **head, unsigned int line);

void free_stack(void);

void sub(stack_t **head, unsigned int line);

void add(stack_t **head, unsigned int line);

void mul(stack_t **head, unsigned int line);

void divided(stack_t **head, unsigned int line);

void mod(stack_t **head, unsigned int line);

#endif
