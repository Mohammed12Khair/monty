#ifndef MAIN_H 
#define MAIN_H
#define _GNU_SOURCE

#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);

void openFile(char *file_name);
void readFile(FILE *file);
int toknizeInput(char *buffer, int line_number, int format);
void function_to_command(char *opcode, char *value, int ln, int format);
void command_call(op_func func, char *op, char *val, int ln, int format);
void Push(stack_t **Element, __attribute__((unused))unsigned int ln);
void list_stack(stack_t **stack, unsigned int line_number);
void Pop(stack_t **stack, unsigned int line_number);
void PrintTopElement(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void Switch(stack_t **stack, unsigned int line_number);
void Sum_nodes(stack_t **stack, unsigned int line_number)
#endif