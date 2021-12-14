#include <stdio.h>

int main( )
{
   int age = 4;

   switch ( age )
   {
      case 0:
         printf( "You are zero\n" );
         break;

      case 1:
         printf( "You are one\n" );
         break;

      case 2:
         printf( "You are two\n" );
         break;

      default:
         printf( "N/A\n" );
         break;
   }

   return 0;
}