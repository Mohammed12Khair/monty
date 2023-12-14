#include "main.h"

/**
 * toknizeInput - Separates each line into tokens to determine
 * which function to call
 * @buffer: line from the file
 * @line_number: line number
 * @format: If 0 Nodes will be entered as a stack.
 * if 1 nodes will be entered as a queue.
 * Return: Returns 0 if the opcode is stack. 1 if queue.
 */

int toknizeInput(char *buffer, int line_number, int format)
{
	char *opration_code, *value;
	const char *delim = "\n ";

	if (buffer == NULL)
		Error(4);

	opration_code = strtok(buffer, delim);
	if (opration_code == NULL)
		return (format);
	value = strtok(NULL, delim);

	if (strcmp(opration_code, "stack") == 0)
		return (0);
	if (strcmp(opration_code, "queue") == 0)
		return (1);

	function_to_command(opration_code, value, line_number, format);
	return (format);
}
