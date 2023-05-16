#include <stdio.h>

int *GetArray()
{
   static int array[2];
   array[0] = 4;
   array[1] = 6;

   return array;
}

int main()
{
   int *p = GetArray();

   printf("%i\n", *(p + 0));

   return 0;
}