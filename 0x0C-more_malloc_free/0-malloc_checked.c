#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory, if failure exit with value 98
 * @b: unsigned int is the size to allocate
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *thisAlloc = malloc(b);

	if (thisAlloc == NULL)
		exit(98);
	return (thisAlloc);
}
