#include <stdio.h>

int main( )
{
   for ( int i = 0; i < 10; i++ )
   {
      if ( i * i == 64 )
      {
         continue;
      }

      printf( "%i squared is %i\n", i, i * i );
   }

   return 0;
}