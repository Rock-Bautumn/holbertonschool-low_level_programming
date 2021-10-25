#include <stdio.h>

int main( void )
{

      int x;
      int *px = &x;

      printf("sizeof(x)                = %ld\n", sizeof(x) );
      printf("sizeof(*px)              = %ld\n", sizeof(px) );
      printf("sizeof(char)             = %ld\n", sizeof(char) );
      printf("sizeof(short)            = %ld\n", sizeof(short) );
      printf("sizeof(int)              = %ld\n", sizeof(int) );
      printf("sizeof(long)             = %ld\n", sizeof(long) );
      /* long long not supported in C90 */
      /* printf("sizeof(long long)        = %ld\n", sizeof(long long) ); */
      printf("\n");

      printf("sizeof(unsigned char)    = %ld\n", sizeof(unsigned char) );
      printf("sizeof(unsigned short)   = %ld\n", sizeof(unsigned short) );
      printf("sizeof(unsigned int)     = %ld\n", sizeof(unsigned int) );
      printf("sizeof(unsigned long)    = %ld\n", sizeof(unsigned long) );
      printf("\n");

      printf("sizeof(float)            = %ld\n", sizeof(float) );
      printf("sizeof(double)           = %ld\n", sizeof(double) );
      printf("sizeof(long double)      = %ld\n", sizeof(long double) );
      printf("\n");

      return (0);
}
