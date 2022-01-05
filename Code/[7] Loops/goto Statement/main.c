#include <stdio.h>

int main( )
{
   
   int i = 10;

   EpicGoTo:

   printf( "Before check" );

   if ( i == 10 )
   {
      i = 9;
      goto EpicGoTo;
   }

   return 0;
}