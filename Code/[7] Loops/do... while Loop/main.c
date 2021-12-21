#include <stdio.h>

int main( )
{
   // for ( int i = 0; i < 1000; i++ )
   // {
   //    printf( "Hello World! - %i\n", i + 1 );
   // }

   int i = 0;

   // while ( i < 0 )
   // {
   //    printf( "Hello World! - %i\n", i + 1 );

   //    i++;
   // }

   do
   {
      printf( "Hello World! - %i\n", i + 1 );

      i++;
   } while ( i < 0 );

   return 0;
}