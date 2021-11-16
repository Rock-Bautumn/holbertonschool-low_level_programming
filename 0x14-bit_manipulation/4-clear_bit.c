#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of an indexed bit to 0 of number n
 * @n: the number to modify
 * @index: the index to clear the bit
 * Return: 1 if worked, -1 if it failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
