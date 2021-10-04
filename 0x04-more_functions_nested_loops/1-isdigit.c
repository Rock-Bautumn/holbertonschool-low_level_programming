#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: character to check
 * Return: 1 if digit, 0 if not digit
 */
int _isdigit(int c)
{
	/* 48 = 0 and 57 = 9 */
	if ((c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
