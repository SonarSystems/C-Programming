#include <stdio.h>

int main( )
{
   for ( int i = 1; i < 100; i++ )
   {
      for ( int j = 15; j <= 40; j++ )
      {
         if ( i % j == 0 )
         {
            printf( "%i is evenly divisible by %i\n", i, j );
         }
      }

      printf( "\n" );
   }

   return 0;
}