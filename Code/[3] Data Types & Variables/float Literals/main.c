#include <stdio.h>

int main( )
{
   float f;
   f = 3.14159; // valid
   f = 314159E-5L; // valid

   f = 510E; // invalid (incomplete exponent)
   f = 20f; // invalid (no decimal or exponent)
   f = .e66; // invalid (missing integer or fraction)


   return 0;
}