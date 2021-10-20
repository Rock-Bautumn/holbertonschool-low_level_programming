#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars that are filled with a specific
 * char
 * @size: the number of bytes to allocate
 * @c: the character to fill the bytes with
 * Return: the address of the array, NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x = 0;
	char *newArray;

	if (size < 1)
		return (NULL);
	newArray = malloc(size * sizeof(char));

	if (newArray == NULL)
		return (NULL);

	while (x < size)
	{
		*(newArray + x) = c;
		x++;
	}
	return (newArray);
}
