#ifndef _APP_COMMON_
#define _APP_COMMON_

typedef unsigned long ulong;

typedef struct {
   void (*fptr1)(int, int);
   void (*fptr2)(ulong, ulong);
   int app_num;
} app_data_t;

#endif
