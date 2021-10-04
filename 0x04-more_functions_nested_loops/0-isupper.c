#include "main.h"
/**
 * _isupper - checks for uppercase character
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	/* 65 = A and 90 = Z */
	if ((c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
