#include <stdio.h>

static int x = 9; // GLOBAL VARIABLE

void Print( )
{
   static int i = 0; // LOCAL VARIABLE

   printf( "%i - %i\n", i, x );

   i++;
   x++;
}

int main( )
{
   Print( );
   Print( );
   Print( );
   Print( );
   Print( );

   return 0;
}