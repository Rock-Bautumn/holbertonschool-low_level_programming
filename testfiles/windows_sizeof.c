#include <stdio.h>

int main( void )
{

      int x;
      int *px = &x;

      printf("sizeof(x)                = %lu\n", (long unsigned int) sizeof(x) );
      printf("sizeof(*px)              = %lu\n", (long unsigned int) sizeof(px) );
      printf("sizeof(char)             = %lu\n", (long unsigned int) sizeof(char) );
      printf("sizeof(short)            = %lu\n", (long unsigned int) sizeof(short) );
      printf("sizeof(int)              = %lu\n", (long unsigned int) sizeof(int) );
      printf("sizeof(long)             = %lu\n", (long unsigned int) sizeof(long) );
      /* long long not supported in C90 */
      /* printf("sizeof(long long)        = %lu\n", (long unsigned int) sizeof(long long) ); */
      printf("\n");

      printf("sizeof(unsigned char)    = %lu\n", (long unsigned int) sizeof(unsigned char) );
      printf("sizeof(unsigned short)   = %lu\n", (long unsigned int) sizeof(unsigned short) );
      printf("sizeof(unsigned int)     = %lu\n", (long unsigned int) sizeof(unsigned int) );
      printf("sizeof(unsigned long)    = %lu\n", (long unsigned int) sizeof(unsigned long) );
      printf("\n");

      printf("sizeof(float)            = %lu\n", (long unsigned int) sizeof(float) );
      printf("sizeof(double)           = %lu\n", (long unsigned int) sizeof(double) );
      printf("sizeof(long double)      = %lu\n", (long unsigned int) sizeof(long double) );
      printf("\n");
      printf("Press any key to end...");
      getchar();
      return (0);
}
