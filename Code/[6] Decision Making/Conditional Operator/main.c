#include <stdio.h>

int main( )
{
   int score = 900;

   /*if ( score > 100 )
   {
      printf( "Well done you have won!\n" );
   }
   else
   {
      printf( "You are a loser :(\n" );
   }*/

   score > 100 ? printf( "Well done you have won - Conditional!\n" ) : printf( "You are a loser :(\n" );

   return 0;
}