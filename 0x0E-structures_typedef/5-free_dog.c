#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * free_dog - releases the dog from memory
 * @d: the pointer of the struct we are freeing
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
