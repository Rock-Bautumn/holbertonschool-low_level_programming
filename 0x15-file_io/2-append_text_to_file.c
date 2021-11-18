#include "main.h"

/**
 * append_text_to_file - adds text to end of a file
 * @filename: target file to append text to
 * @text_content: text content we are adding to filename
 * Return: 1 if success, -1 if it failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t filedesc;
	ssize_t result;

	if (!filename)
		return (-1);

	filedesc = open(filename, O_WRONLY | O_APPEND);
	if (filedesc == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (*text_content != '\0')
	{
		result = write(filedesc, text_content, 1);
		if (result == -1)
		{
			close(filedesc);
			return (-1);
		}
		text_content++;
	}
	close(filedesc);
	return (1);
}
