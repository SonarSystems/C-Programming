#include <stdio.h>

void Adder( int *num1, int num2 )
{
   *num1 = 0;

   printf( "%i\n", *num1 + num2 );
}

int main( )
{
   int i = 8;

   Adder( &i, 5 );

   printf( "i = %i\n", i );

   return 0;
}