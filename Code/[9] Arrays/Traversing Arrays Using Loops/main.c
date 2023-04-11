#include <stdio.h>

int main( )
{
   /*int scores[1000];

   for ( int i = 0; i < 1000; i++ )
   {
      scores[i] = i;
   }

   for ( int i = 0; i < 1000; i++ )
   {
      printf( "User %i has a score of %i\n", i + 1, scores[i] );
   }*/

   int grid[10][100];

   for ( int i = 0; i < 10; i++ )
   {
      for ( int j = 0; j < 100; j++ )
      {
         grid[i][j] = 1;
      }
   }

   for ( int i = 0; i < 10; i++ )
   {
      for ( int j = 0; j < 100; j++ )
      {
         printf( "Grid Space %i:%i has the value %i\n", i, j, grid[i][j] );
      }
   }

   return 0;
}