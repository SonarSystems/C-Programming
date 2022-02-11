#include <stdio.h>
#include <stdarg.h>

int Adder( int count, ... )
{
   va_list list;
   int sum = 0;

   va_start( list, count );

   for ( int i = 0; i < count; i++ )
   {
      sum += va_arg( list, int );
   }

   va_end( list );

   return sum;
}

int main( )
{
   printf( "Sum 1 is %i\n", Adder( 2,  5, 9 ) );
   printf( "Sum 2 is %i\n", Adder( 6,  5, 9, 5, 23, 0, -6 ) );

   return 0;
}