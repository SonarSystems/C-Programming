#include <stdio.h>

void Adder( int num1, int num2 )
{
   printf( "%i", num1 + num2 );
}

int main( )
{
   int i = 8;

   Adder( i, 5 );

   return 0;
}