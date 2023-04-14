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

float Average( float *arrayOfNumbers )
{
   float total = 0;

   for ( int i = 0; i < 100; i++ )
   {
      total += arrayOfNumbers[i];
   }

   arrayOfNumbers[0] = 9;

   return total / 100.0f;
}

int main( )
{
   float numbers[100];

   for ( int i = 0; i < 100; i++ )
   {
      numbers[i] = i;
   }

   printf( "%f\n", numbers[0] );

   printf( "The average is %f\n", Average( numbers ) );

   printf( "%f\n", numbers[0] );


   return 0;
}