#include <stdio.h>

int main( )
{
   int i = 8;

   printf( "Size of a variable - %i\n", sizeof( i ) );
   printf( "Size of an integer - %i\n", sizeof( int ) );
   printf( "Size of a character - %i\n", sizeof( char ) );
   printf( "Size of a float - %i\n", sizeof( float ) );
   printf( "Size of a double - %i\n", sizeof( double ) );

   return 0;
}