#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - loads dog data into dog struct
 * @d: dog struct
 * @name: name of the dog
 * @age: age of dog (float)
 * @owner: name of owner
 * Return: return void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
