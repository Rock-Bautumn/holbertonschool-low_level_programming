#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigitOfN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigitOfN = n % 10;
	printf("Last digit of %d is ", n);
	printf("%d and is ", lastDigitOfN);
	if (lastDigitOfN > 5)
	{
		printf("greater than 5\n");
	}
	if (lastDigitOfN == 0)
	{
		printf("0\n");
	}
	if ((lastDigitOfN < 6) && (lastDigitOfN != 0))
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
