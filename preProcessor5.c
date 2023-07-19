#include <stdio.h>
#include<conio.h>
#define MAX 100
void main(void)
{
    #if MAX > 99
        printf("You have defined the MAX Macro Greater than 100\n");
    #endif


    #ifndef MAX
        printf("You have defined the MAX Macro Greater than 100");
    #else
        printf("You have defined the MAX Macro Less than 100\n");
    #endif


    #if MAX > 99
        printf("You have defined the MAX Macro Greater than 100\n");
    #else
        #error You have not defined the MAX Macro
    #endif
}
