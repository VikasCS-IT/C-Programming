#include <stdio.h>
#include <conio.h>
#define __STDC__
#define MAX 100
void main(void)
{
    #if MAX > 99
        printf("\nName of the Program File is : %s", __FILE__);
        printf("\nThe Line being Compiled is : %d", __LINE__);
        printf("\nThe Compilation Date of File : %s", __DATE__);
        printf("\nThe Compilation time of File : %s", __TIME__);
    #else
        #error "You have defined the MAX Macro Less than 100"   // for c++
    #endif
    getch();
}
