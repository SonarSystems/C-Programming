#include <stdio.h>

/*float Average( float arrayOfNumbers[100] )
{
   float total = 0;

   for ( int i = 0; i < 100; i++ )
   {
      total += arrayOfNumbers[i];
   }

   return total / 100.0f;
}*/

/*float Average( float arrayOfNumbers[] )
{
   float total = 0;

   for ( int i = 0; i < 100; i++ )
   {
      total += arrayOfNumbers[i];
   }

   return total / 100.0f;
}*/

float Average( float arrayOfNumbers[][2] )
{
   float total = 0;

   for ( int i = 0; i < 100; i++ )
   {
      total += arrayOfNumbers[i][0];
      total += arrayOfNumbers[i][1];
   }

   arrayOfNumbers[0][0] = 9;

   return total / 200.0f;
}

int main( )
{
   float numbers[100][2];

   for ( int i = 0; i < 100; i++ )
   {
      numbers[i][0] = i;
      numbers[i][1] = i * i;
   }

   printf( "%f\n", numbers[0][0] );

   printf( "The average is %f\n", Average( numbers ) );

   printf( "%f\n", numbers[0][0] );


   return 0;
}