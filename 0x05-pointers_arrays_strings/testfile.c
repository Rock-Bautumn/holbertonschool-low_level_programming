#include <stdio.h>

int main()
{
	int slices = 20;
	int *p = &slices;

	printf("Slices: %d\n", *p);
	return 0;
}
