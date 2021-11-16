#include <stdio.h>
#include "main.h"

/**
 * get_bit - get the bit of number n at an index
 * @n: the number to get bit of
 * @index: the index of bit we are getting
 * Return: the value of the bit at the index, or -1 if there's an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 32)
		return (-1);

	bit = (n >> index) & 1;

	return ((n >> index) & 1);
}
