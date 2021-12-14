#include <stdio.h>

int main( )
{
   int age = 2;
   int weight = 100;

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

         switch ( weight )
         {
            case 50:
               printf( "You weight 50\n" );
               break;

            case 100:
               printf( "You weight 100\n" );
               break;

            case 150:
               printf( "You weight 150\n" );
               break;

            case 200:
               printf( "You weight 200\n" );
               break;
         }

         break;

      default:
         printf( "N/A\n" );
         break;
   }

   return 0;
}