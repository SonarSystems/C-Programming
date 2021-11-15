#include <stdio.h>

int main( )
{
   // && - AND operator
   // || - OR operator
   // ! - NOT operator

   int num1 = 10;
   int num2 = 7;
   int num3 = 90;

   printf( "&& - %i\n", ( num1 > num2 ) && ( num1 < num3 ) );
   printf( "|| - %i\n", ( num1 > num2 ) || ( num1 < num3 ) );
   printf( "! - %i\n", !( num1 < num2 ) );

   return 0;
}