#include "main.h"
/**
 * Push - Adds a node to the stack.
 * @new_node: Pointer to the new node.
 * @ln: Interger representing the line number of of the opcode.
 */
void Push(stack_t **Element, __attribute__((unused))unsigned int ln)
{
	stack_t *tmp;

	if (Element == NULL || *Element == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *Element;
		return;
	}
	tmp = head;
	head = *Element;
	head->next = tmp;
	tmp->prev = head;
}
