#include<stdio.h>
#include<conio.h>
#include "extern1.c"
int x = 6, y = 8, z = 4;
main()
{
    int b, c ;
    c = x + y;
    printf("\n C is %d ", c);
    b = y - z;
    printf("\nB is %d",b);
    mul(b);  //outpur: 32
    getch();
}

