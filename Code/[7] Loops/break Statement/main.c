#include <stdio.h>

int main( )
{
   for ( int i = 0; i < 10; i++ )
   {
      if ( i * i > 50 )
      {
         break;
      }
      
      printf( "%i squared is %i\n", i, i * i );
   }

   return 0;
}