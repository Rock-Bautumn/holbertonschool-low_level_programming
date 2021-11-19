#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

void cp_error(int return_error_no, char *io_error_file, long close_error_fd);

/**
 * cp_error - processes an error in parent cp function in order to meet
 *            40 line limit for functions
 * @return_error_no: the error number we need to return to main
 * @io_error_file: the filename of the file that is causing the error
 * @close_error_fd: the file descriptor of the failed close
 * Return: void
 */

void cp_error(int return_error_no, char *io_error_file, long close_error_fd)
{

	(void) io_error_file;
	(void) close_error_fd;

	switch (return_error_no)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", io_error_file);
		exit(98);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", io_error_file);
		exit(99);
		break;
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", close_error_fd);
		exit(100);
		break;
	default:
		dprintf(STDERR_FILENO, "Error: Error processing error\n");
		exit(-1);
		break;
	}
}



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
	long skip = (long) NULL;

	if (argc != 3)
		cp_error(97, NULL, skip);

	source = open(argv[1], O_RDONLY);
	if (source == -1)
		cp_error(98, argv[1], skip);

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
		cp_error(99, argv[2], skip);

	while ((result = read(source, buffer, 1024)) != 0)
	{
		if (result == -1)
			cp_error(98, argv[1], skip);

		if (write(dest, buffer, result) != result)
			cp_error(99, argv[2], skip);
	}

	result = close(source);
	if (result == -1)
		cp_error(100, NULL, source);

	result = close(dest);
	if (result == -1)
		cp_error(100, NULL, dest);

	return (0);
}
