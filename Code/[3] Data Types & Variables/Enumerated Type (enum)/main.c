#include <stdio.h>

enum Month { January = 1, February, March = 100, April, May, June, July, August, September, October, November, December };

int main( )
{
   enum Month m;
   m = December;

   printf( "%i\n", m );

   return 0;
}