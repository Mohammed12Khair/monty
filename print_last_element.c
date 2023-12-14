#include "main.h"
/**
 * PrintTopElement - Prints the top Element of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void PrintTopElement(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
		ERROR(6, line_number);
	printf("%d\n", (*stack)->n);
}
