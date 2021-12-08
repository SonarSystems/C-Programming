#include <stdio.h>

int main( )
{
   int day = 8;
   int month = 12;
   int year = 2000;

   if ( year > 2021
      || year == 2021 && month == 12 && day >= 8 )
   {
      printf( "Halo Infinite Campaign is out" );
   }
   else if ( year <= 2021 && year >= 2001 && month <= 12 && day <= 8 )
   {
      printf( "Halo Infinite Campaign is not out" );
   }
   else
   {
      printf( "Even the first Halo is not out yet" );
   }

   return 0;
}