#include <stdio.h>
#include <float.h>

int main( )
{
   printf( "Positive Float Min: %g\n", FLT_MIN );
   printf( "Positive Float Max: %g\n", FLT_MAX );
   printf( "Negative Float Min: %g\n", -FLT_MIN );
   printf( "Negative Float Max: %g\n", -FLT_MAX );

   printf( "Precision value: %i\n", FLT_DIG );

   float f = 5.5466783;

   printf( "%f\n", f );

   return 0;
}