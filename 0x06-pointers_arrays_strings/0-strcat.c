#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - concatenate two strings together, adding the source to the dest
 * @dest: the destination string
 * @src: the string part we are adding to dest
 * Return: the new dest string
 */
char *_strcat(char *dest, char *src)
{
	int goback = 0;

	/* printf("start address: %p\n",(void *)&dest); */
	   /*   printf("%c", *dest); */
	while (*dest != '\0')
	{
		/* printf("dest loop reads %c\n", *dest); */
		dest++;
		/*printf("dest address:%p\n",(void *) &dest); */

		goback++;
	}
	while (*src != '\0')
	{
		*(dest++) = *(src++);
		/* printf("src src = %c\n", *src); */
/* printf("src dest = %c\n", *dest); */
		goback++;
	}
	dest = dest - goback;
	/* printf("end address:%p\n",(void *) &dest); */
	return (dest);
}
