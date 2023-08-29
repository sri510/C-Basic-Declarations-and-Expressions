/*
Write a C program to display the minimum and maximum values for each of C's data types.
Sample Output:
Ranges for integer data types in C

------------------------------------------------------------
int8_t                    -128                   127
int16_t                 -32768                 32767
int32_t            -2147483648            2147483647
int64_t   -9223372036854775808   9223372036854775807
uint8_t                      0                   255
uint16_t                     0                 65535
uint32_t                     0            4294967295
uint64_t                     0  18446744073709551615

============================================================

Ranges for real number data types in C

------------------------------------------------------------
float          1.175494e-38    3.402823e+38
double        2.225074e-308   1.797693e+308
long double  3.362103e-4932  1.189731e+4932
*/
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
int main( void )
{
  printf( "Ranges for integer data types in C\n\n" );
  printf( "------------------------------------------------------------\n");
  printf( "int8_t    %20d  %20d\n"     , SCHAR_MIN , SCHAR_MAX  );
  printf( "int16_t   %20d  %20d\n"     , SHRT_MIN  , SHRT_MAX   );
  printf( "int32_t   %20d  %20d\n"     , INT_MIN   , INT_MAX    );
  printf( "int64_t   %20lld  %20lld\n" , LLONG_MIN , LLONG_MAX  );
  printf( "uint8_t   %20d  %20d\n"     , 0         , UCHAR_MAX  );
  printf( "uint16_t  %20d  %20d\n"     , 0         , USHRT_MAX  );
  printf( "uint32_t  %20d  %20u\n"     , 0         , UINT_MAX   );
  printf( "uint64_t  %20d  %20llu\n"   , 0         , ULLONG_MAX );
  printf( "\n" );
  printf( "============================================================\n\n");
  printf( "Ranges for real number data types in C\n\n" );
  printf( "------------------------------------------------------------\n");
  printf( "float        %14.7g  %14.7g\n"   , FLT_MIN  , FLT_MAX  );
  printf( "double       %14.7g  %14.7g\n"   , DBL_MIN  , DBL_MAX  );
  printf( "long double  %14.7Lg  %14.7Lg\n" , LDBL_MIN , LDBL_MAX );
  printf( "\n" );
return 0;
}
