#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds each argument and prints the sum
 * @argc: - number of arguments passed
 * @argv: - command line parameters
 * Return: always 0;
 */

int main(int argc, char *argv[])
{

	int x = 1;
	int sum = 0;

	while (x < argc)
	{
		if (_isstrnum(argv[x]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[x]);
		x++;
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * _isstrnum - checks if the string is a all numbers or not
 * @str: this is the string we are checking
 * Return: 1 if numbers only, 0 if not
 */

int _isstrnum(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		if (_isdigit(*(str + i)) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * _isdigit - checks for a digit
 * @c: character to check
 * Return: 1 if digit, 0 if not digit
 */
int _isdigit(int c)
{
	/* 48 = 0 and 57 = 9 */
	if ((c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
/**
 * _strlen - returns the length of a string
 *
 * @s: the string we are counting the characters of
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
