#include <stdio.h>

int main( )
{
   int i = 5;
   i = 5; // valid
   i = 5u; // valid (unsigned)
   i = 0xFee; // valid
   i = 3L; // valid

   i = 078; //invalid (octal digit)
   i = 032UU; // invalid (suffixes cannot be repeated)


   return 0;
}