#include <stdio.h>

int main( )
{
   int *i;
   int j = 9;

   i = &j;

   printf( "j = %i\n", j );
   printf( "i = %i\n", *i );

   j = 8;

   printf( "j = %i\n", j );
   printf( "i = %i\n", *i );

   *i = 7;

   printf( "j = %i\n", j );
   printf( "i = %i\n", *i );

   return 0;
}