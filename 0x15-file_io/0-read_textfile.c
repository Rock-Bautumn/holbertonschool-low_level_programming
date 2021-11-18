#include "main.h"


/**
 * read_textfile - read from filename by numchars of characters
 * @filename: the name of the file we are trying to read from
 * @numchars: the number of characters to read from filename
 * Return: the number of characters printed to stdout, 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t numchars)
{
	ssize_t filedesc;
	ssize_t result;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * numchars);
	if (!buffer)
		return (0);

	filedesc = open(filename, O_RDONLY);
	if (filedesc == -1)
		return (0);

	result = read(filedesc, buffer, numchars);
	if (result == -1)
		return (0);

	result = write(STDOUT_FILENO, buffer, result);
	if (result == -1)
		return (0);

	close(filedesc);
	free(buffer);

	return (result);
}
