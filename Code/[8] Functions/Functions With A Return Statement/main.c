#include <stdio.h>

int Adder( int num1, int num2 )
{
   return num1 + num2;
}

int main( )
{
   int i = 8;

   int sum = Adder( i, 5 );

   printf( "Returned value is %i\n", sum );

   return 0;
}