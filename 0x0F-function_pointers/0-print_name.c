#include "function_pointers.h"

/**
 * print_name- prints the name given to it
 * @name: the name we are printing
 * @f: the function we are printing with
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{

	f(name);

}
