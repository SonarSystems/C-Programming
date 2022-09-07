#include <stdio.h>

void Print( )
{
   static int i = 0;
   printf( "%i\n", i );
   i++;
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