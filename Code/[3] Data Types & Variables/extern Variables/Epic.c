#include <stdio.h>

extern int var;

void Print()
{
    printf( "%i\n", var );
    var++;
}