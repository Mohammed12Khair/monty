#include "main.h"
/**
 * openFile - opens a file
 * @file_name: the file namepath
 * Return: nothing function is of type void
 */

void openFile(char *file_name)
{
	FILE *file = fopen(file_name, "r");

	if (file_name == NULL || file == NULL)
		err(2, file_name);

	read_file(file);
	fclose(file);
}