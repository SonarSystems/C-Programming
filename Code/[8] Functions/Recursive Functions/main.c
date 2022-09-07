#include <stdio.h>

int Factorial( int i )
{
   if ( i == 1 )
   {
      return 1;
   }
   else
   {
      i = i * Factorial( i - 1);
   }

   return i;
}

int main( )
{
   printf( "1! is %i\n", Factorial( 1 ) );
   printf( "2! is %i\n", Factorial( 2 ) );
   printf( "3! is %i\n", Factorial( 3 ) );
   printf( "4! is %i\n", Factorial( 4 ) );
   printf( "5! is %i\n", Factorial( 5 ) );

   return 0;
}