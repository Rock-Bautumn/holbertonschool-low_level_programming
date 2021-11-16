#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the bit of n to 1 at index
 * @n: the number to update
 * @index: the index of the value
 * Return: 1 if success, -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
