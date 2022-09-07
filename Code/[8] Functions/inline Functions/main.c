#include <stdio.h>
#include "main.h"

extern inline int Add( const int num1, const int num2 );

int main( )
{
   printf( "%i", Add( 5, 6 ) );

   return 0;
}