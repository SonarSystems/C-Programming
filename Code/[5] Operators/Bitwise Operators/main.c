#include <stdio.h>

int main( )
{
   int i = 35;    // 00100011
   int j = 19;    // 00010011
                  // 00000011 & AND Operator
                  // 00110011 | OR Operator
                  // 00110000 ^ XOR Operator

                  // 00010011
                  // 11101100 ~One's Compliement Operator

                  // 00010011
                  // 00100110 << Left Shift Operator (38)
                  // 00001001 >> Right Shift Operator (9)


   printf( "%i & %i = %i\n", i, j, ( i & j ) );
   printf( "%i | %i = %i\n", i, j, ( i | j ) );
   printf( "%i ^ %i = %i\n", i, j, ( i ^ j ) );
   printf( "%i << = %i\n", j, j << 1 );
   printf( "%i >> = %i\n", j, j >> 1 );

   return 0;
}