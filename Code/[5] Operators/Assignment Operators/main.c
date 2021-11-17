#include <stdio.h>

int main( )
{
   int i = 9;

   i += 10; // i = i + 10; Add AND Assignment Operator
   i -= 10; // i = i - 10; Subtract AND Assignment Operator
   i *= 10; // i = i * 10; Multiply AND Assignment Operator
   i /= 10; // i = i / 10; Divide AND Assignment Operator

   i %= 10; // i = i % 10; Modulus (remainder) AND Assignment Operator

   i <<= 3; // i = i << 3; Left Shift AND Assignment Operator
   i >>= 3; // i = i >> 3; Right Shift AND Assignment Operator
   i &= 3; // i = i & 3; Bitwise AND Assignment Operator
   i |= 3; // i = i | 3; Bitwise (inclusive) OR Assignment Operator
   i ^= 3; // i = i ^ 3; Bitwise XOR Assignment Operator

   return 0;
}