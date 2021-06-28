#include <stdio.h>
#include <stdlib.h>

int main( )
{
   FILE *fp;

   fp = fopen( "file.txt", "w+" );
   fprintf( fp, "Hello" );
   
   fclose( fp );
   
   return 0;
}