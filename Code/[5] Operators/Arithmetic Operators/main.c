#include <stdio.h>

int main( )
{
   float num1 = 10;
   float num2 = 7;

   printf( "Add %f\n", num1 + num2 );
   printf( "Subtract %f\n", num1 - num2 );
   printf( "Multiply %f\n", num1 * num2 );
   printf( "Divider %f\n", num1 / num2 );
   printf( "Modulus %i\n", 10 % 7 ); // Remainder operator
   
   int i = 0;
   //i++; // Increment (i = i + 1;)
   i--; // Decrement (i = i - 1;)
   printf( "%i\n", i );

   return 0;
}