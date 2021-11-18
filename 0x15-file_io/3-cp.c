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
		/* int dprintf(int fd, const char *format, ...); */
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}

	dest = open(argv[2], O_CREAT | O_RDWR |  O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	while ((result = read(source, buffer, 1024)) != 0)
	{
		if (result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n\n", argv[1]);
			exit(98);
		}
		result = write(dest, buffer, result);
		if (result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
			exit(99);
		}
	}
	close(source);
	close(dest);
	return (0);

}
