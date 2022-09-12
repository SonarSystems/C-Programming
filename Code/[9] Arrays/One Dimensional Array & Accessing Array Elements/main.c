#include <stdio.h>

int main( )
{
   int highscores[5] = { 1000, 800, 700, 300, 298 };

   /*highscores[0] = 1000;
   highscores[1] = 800;
   highscores[2] = 700;
   highscores[3] = 300;
   highscores[4] = 299;*/

   printf( "#1 - %i\n", highscores[0] );
   printf( "#2 - %i\n", highscores[1] );
   printf( "#3 - %i\n", highscores[2] );
   printf( "#4 - %i\n", highscores[3] );
   printf( "#5 - %i\n", highscores[4] );

   return 0;
}