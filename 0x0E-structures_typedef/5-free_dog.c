#include <stdlib.h>
#include "dog.h"
#include <string.h>

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
