#include "main.h"

/**
 * readFile - reads a file.
 * @fd: pointer to file descriptor.
 * Return: nothing function is of type void.
 */

void readFile(FILE *file)
{
	int line_number, format = 0;
	char *buffer = NULL;
	size_t len = 0;

	for (line_number = 1; getline(&buffer, &len, file) != -1; line_number++)
	{
		format = parse_line(buffer, line_number, format);
	}
	free(buffer);
}