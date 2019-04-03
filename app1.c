#include <stdio.h>
#include "app1.h"

void fun11( int a, int b ) {
   printf( "%s Value of a is %d\n", __func__, a );
   printf( "%s Value of b is %d\n", __func__, b );
   printf( "\n" );
}

void fun12( ulong p, ulong q ) {
   printf( "%s Value of p - q is %ld\n", __func__, (p - q) );
   printf( "\n" );
}

