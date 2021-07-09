#include <stdio.h>
#include <limits.h>

int main( )
{
   printf( "Int Min: %i\n", INT_MIN );
   printf( "Int Max: %i\n", INT_MAX );

   int num1 = 5;
   int num2 = 10;
   int result = num1 + num2;

   printf( "%i\n", num1 );
   
   printf( "%i + %i = %i\n", num1, num2, result );

   return 0;
}