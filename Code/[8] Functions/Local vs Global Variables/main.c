#include <stdio.h>

int num2 = 9;

void PrintHello( )
{
   int num1 = 10;
   printf( "Hello World - %i", num2 );
}

int main( )
{
   PrintHello( );

   printf( "%i", num2 );

   return 0;
}