#include<stdio.h>
#include<conio.h>
#include<limits.h>
/*main()
{
    printf("%d",INT_MIN);
    printf("\n%d",INT_MAX);
    printf("\n%d",SHRT_MAX);
    printf("\n%d",SHRT_MIN);
    printf("\n\n%c",CHAR_BIT);
    printf("\n%c",CHAR_MAX);
    printf("\n%c",CHAR_MIN);
    printf("\n\n%u",0);
    printf("\n%u",USHRT_MAX);
    printf("\n%u",UINT_MAX);
    printf("\n%ld",LONG_MAX);
    printf("\n%d",LONG_MIN);
   // printf("\n%e",FLT_MIN);
    //printf("\n%e",FLT_MAX);
   // printf("\n%e",DBL_MIN);
   // printf("\n%e",DBL_MAX);
   // printf("\n%Le",LDBL_MIN);
}*/

#include <stdio.h>
#include <conio.h>
#include <limits.h>
#include <float.h>
#define _ printf("\n Minimum
#define __ printf("\n Maximum
void main(){
_ short|short int|signed short|signed short int : %d ", SHRT_MIN );
__ short|short int|signed short|signed short int : %d ", SHRT_MAX );
_ unsigned short|unsigned short int : %u", 0 );
__ unsigned short|unsigned short int : %u ", USHRT_MAX );
_ int|signed int : %d ", INT_MIN );
__ int|signed int : %d ", INT_MAX );
_ unsigned int : %u ", 0 );
__ unsigned int : %u ", UINT_MAX );
_ long|long int|signed long|signed long int : %ld ", LONG_MIN );
__ long|long int|signed long|signed long int : %ld ", LONG_MAX );
_ unsigned long|unsigned long int : %lu ", 0 );
__ unsigned long|unsigned long int : %lu", ULONG_MAX );
_ float : %e", FLT_MIN);
__ float : %e", FLT_MAX);
_ double : %e", DBL_MIN);
__ double : %e", DBL_MAX);
_ long double : %Le", LDBL_MIN);
__ long double : %Le", LDBL_MAX);
}
