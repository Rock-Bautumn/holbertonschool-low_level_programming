#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints out a table of the called dog struct
 * @d: address of dog struct passed to us
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
