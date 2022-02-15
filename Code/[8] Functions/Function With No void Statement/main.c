#include <stdio.h>

Hello( )
{
   printf( "Hello\n" );

   return 90;
}

int main( )
{
   int i = Hello( );

   printf( "Return type is %i\n", i );

   return 0;
}