#include <stdio.h>
#include "app2.h"

void fun21( int a, int b ) {
   printf( "%s Value of 2 * a is %d\n", __func__, ( a << 1 ) );
   printf( "%s Value of 2 * b is %d\n", __func__, ( b << 1 ) );
   printf( "\n" );
}

void fun22( ulong p, ulong q ) {
   printf( "%s Value of 2 * p - q is %ld\n", __func__, ((2 * p) - q) );
   printf( "\n" );
}
