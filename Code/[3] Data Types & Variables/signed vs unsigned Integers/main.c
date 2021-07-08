#include <stdio.h>
#include <limits.h>

int main( )
{
   // Int is 4 bytes in this case
   printf( "Int min: %i\n", INT_MIN );
   printf( "Int max: %i\n", INT_MAX );
   printf( "Unsigned Int max: %u\n", UINT_MAX );

   // Short is 2 bytes in this case
   printf( "Short min: %i\n", SHRT_MIN );
   printf( "Short max: %i\n", SHRT_MAX );
   printf( "Unsigned Short max: %u\n", USHRT_MAX );

   // Long is 4 bytes also in this case but can be as much as 8 bytes
   printf( "Long min: %li\n", LONG_MIN );
   printf( "Long max: %li\n", LONG_MAX );
   printf( "Unsigned Long max: %lu\n", ULONG_MAX );

   // Long long is 8 bytes in this case but can be as much as 16 bytes
   printf( "Long Long min: %lli\n", LLONG_MIN );
   printf( "Long Long max: %lli\n", LLONG_MAX );
   printf( "Unsigned Long Long max: %llu\n", ULLONG_MAX );

   int i = 5;
   //int i = 2147483649;
   unsigned int ui = 5;
   //unsigned int ui = -1;
   
   short s1 = 5;
   short int s2 = 5;
   unsigned short us1 = 5;
   unsigned short int us2 = 5;

   long l1 = 5;
   long int l2 = 5;
   unsigned long ul1 = 5;
   unsigned long int ul2 = 5;

   long long ll1 = 5;
   long long ll2 = 5;
   unsigned long long ull1 = 5;
   unsigned long long ull2 = 5;

   printf( "%i\n", i );
   printf( "%i\n", s1 );
   printf( "%li\n", l1 );
   printf( "%lli\n", ll1 );

   printf( "%u\n", ui );
   printf( "%u\n", us1 );
   printf( "%lu\n", ul1 );
   printf( "%llu\n", ull1 );

   return 0;
}