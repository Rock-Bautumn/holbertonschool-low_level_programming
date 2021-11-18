#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 * main - copies a file from source to dest
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	ssize_t dest, source, result;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((result = read(source, buffer, 1024)) != 0)
	{
		if (result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (write(dest, buffer, result) != result)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	result = close(source);
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", source);
		exit(100);
	}
	result = close(dest);
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", dest);
		exit(100);
	}
	return (0);
}
