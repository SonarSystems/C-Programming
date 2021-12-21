#include <stdio.h>

int main( )
{
   // for ( int i = 0; i < 1000; i++ )
   // {
   //    printf( "Hello World! - %i\n", i + 1 );
   // }

   int i = 0;

   while ( i < 1000 )
   {
      printf( "Hello World! - %i\n", i + 1 );

      i++;
   }

   return 0;
}