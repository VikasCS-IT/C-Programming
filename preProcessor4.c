#include <stdio.h>
#include <conio.h>
#       /* compiler ignor single # (Null Directive) */
#define str(s) # s
#define concat(x, y) x ## y
void main(void)
{
    int xy = 100;
    printf(str(This is all about Macro));
    printf("\n Value of xy is : %d", concat(x, y));
}
