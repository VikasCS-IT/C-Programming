#include <stdio.h>
#include <conio.h>
#define MAX 100
void main(void)
{
    #if MAX > 99
        printf("Name of the Program File is %s", __FILE__ );
        printf("\n");
        printf("The Line being Compiled is %d", __LINE__);
    #else
        #error "You have defined the MAX Macro Less than 100"   // for c++
    #endif
    getch();
}

/*
Built – In Predefined Macros
1 __LINE__
2 __FILE__
3 __DATE__
4 __TIME__
5 __STDC__
6 __cplusplus__
*/
