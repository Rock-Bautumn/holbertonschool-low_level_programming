#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

/*    my_dog.name = "Poppy"; */
    my_dog.age = 42.5;
    /* my_dog.owner = "Ronald Mcdonald"; */
    print_dog(&my_dog);
    return (0);
}
