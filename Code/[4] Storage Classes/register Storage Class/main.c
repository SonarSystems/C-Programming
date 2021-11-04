#include <stdio.h>

int main( )
{
   register int i = 5;
   int j = 6;

   printf( "%i", i );
   printf( "%u", &i );

   return 0;
}