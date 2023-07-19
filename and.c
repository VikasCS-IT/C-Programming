#include <stdio.h>
main()
{
    int x = 150; // Bit-Pattern of 150 = 10010110
    int j;
    int y = 16;
    //clrscr();
    printf("Value of x is %d ", x);
    j = y & 16;
    (j == 0) ? printf("\n Fifth Bit of value %d is Off", x) :
    printf("\n Fifth Bit of value %d is On", x);
    j = x & 32;
    (j == 0) ? printf("\n Sixth Bit of value %d is Off", x) :
    printf("\n Sixth Bit of value %d is On", x);
}
