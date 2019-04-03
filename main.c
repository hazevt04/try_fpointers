#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

#include "app1.h"
#include "app2.h"

int main( int argc, char* argv[] ) {
   app_data_t app_data1;
   app_data1.app_num = 1;
   app_data1.fptr1 = &fun11;
   app_data1.fptr2 = &fun12;
   app_data1.fptr1(10, 20);
   app_data1.fptr2(10, 20);
   

   app_data_t app_data2;
   app_data2.app_num = 2;
   app_data2.fptr1 = &fun21;
   app_data2.fptr2 = &fun22;
   app_data2.fptr1(10, 20);
   app_data2.fptr2(10, 20);
    
   return 0;
}
