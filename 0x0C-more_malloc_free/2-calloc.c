#include <stdlib.h>
#include "main.h"

/**
 * _calloc - initializes a memory allocation, fills it with 0
 * @nmemb: number of members
 * @size: size of each element
 * Return: returns a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newArray;
	unsigned int x = 0;

	if (!nmemb || !size || nmemb == 0 || size == 0)
		return (NULL);
	newArray = malloc(nmemb * size);
	for (; x < (nmemb * size); x++)
	{
		*(newArray + x) = 0;
	}
	return (newArray);
}
