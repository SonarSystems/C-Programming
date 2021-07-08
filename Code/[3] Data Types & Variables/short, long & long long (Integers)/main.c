#include <stdio.h>
#include <limits.h>

int main( )
{
   // Int is 4 bytes in this case
   printf("Int min: %i\n", INT_MIN );
   printf("Int max: %i\n", INT_MAX );

   // Short is 2 bytes in this case
   printf("Short min: %i\n", SHRT_MIN );
   printf("Short max: %i\n", SHRT_MAX );

   // Long is 4 bytes also in this case but can be as much as 8 bytes
   printf("Long min: %li\n", LONG_MIN );
   printf("Long max: %li\n", LONG_MAX );

   // Long long is 8 bytes in this case but can be as much as 16 bytes
   printf("Long Long min: %lli\n", LLONG_MIN );
   printf("Long Long max: %lli\n", LLONG_MAX );

   int i = 5;
   //int i = 2147483649;
   
   short s1 = 5;
   short int s2 = 5;

   long l1 = 5;
   long int l2 = 5;

   long long ll1 = 5;
   long long ll2 = 5;

   printf( "%i\n", i );
   printf( "%i\n", s1 );
   printf( "%li\n", l1 );
   printf( "%lli\n", ll1 );

   return 0;
}