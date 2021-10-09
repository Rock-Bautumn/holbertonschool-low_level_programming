#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;
  int x = -10;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  printf("a[2] is %p\n", (void *)&a[2]);

  while (x < 10)
  {
	  x++;
	  printf("p of %d is %p\n\n", x, (void *)(p + x));
  }
  *(p + 6) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
