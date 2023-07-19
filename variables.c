#include<stdio.h>
#include<conio.h>
int x = 6, y = 8, z = 4;
void main()
{
    int b, c ;
    c = x + y;
    printf("\n C is %d ", c);
    b = y-z;
    printf("\n B is %d ", b);
    mul(b);
    getch();
}
mul(int l)
{
    int m;
    m = l * y;
    printf("\n Multiplication of B and Y is %d ", m);
}
