#include <stdio.h>

int main( )
{
   int num1 = 10;
   int num2 = 10;

   printf( "Equal Operand - %i\n", num1 == num2 );
   printf( "Not Equal Operand - %i\n", num1 != num2 );
   printf( "Greater Than Operand - %i\n", num1 > num2 );
   printf( "Greater Than Or Equal To Operand - %i\n", num1 >= num2 );
   printf( "Less Than Operand - %i\n", num1 < num2 );
   printf( "Less Than Or Equal To Operand - %i\n", num1 <= num2 );

   return 0;
}