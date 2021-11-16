#include "main.h"

/**
 * binary_to_uint - convert binary string to unsigned int
 * @b: a string of binary chars to convert to unsigned int
 * Return: the uint of the binary chars
 */
unsigned int binary_to_uint(const char *b)
{
	int length, power;
	unsigned int result = 0;

	for (length = 0; b[length]; length++)
		;
	length--;
	for (power = 1; length >= 0; --length, power *= 2)
	{
		if (b[length] == '1')
			result += power;
	}
	return (result);
}
