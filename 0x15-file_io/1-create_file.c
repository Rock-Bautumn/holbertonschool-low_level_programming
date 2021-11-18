#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to filename
 * Return: 1 if success, -1 if it failed
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t filedesc;
	ssize_t result;

	if (filename == NULL)
		return (-1);

	filedesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filedesc == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*text_content != '\0')
		{
			result = write(filedesc, text_content, 1);
			if (result == -1)
				return (-1);
			text_content++;
		}
	}
	close(filedesc);
	return (1);
}
