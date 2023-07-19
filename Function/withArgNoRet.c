#include<stdio.h>
#include<conio.h>
void main()
{
    int j, k;
    //clrscr();
    printf("\n Enter first and Second Value:");
    scanf("%d %d", &j, &k);
    sum (j, k);
    mul (j, k);
    getch();
}
//Function:
sum ( int x, int y)
{
    int z;
    z = x + y;
    printf("\n Sum of %d and %d is %d", x, y, z);
}
//Function:
mul (int l, int m )
{
    int n;
    n = l * m;
    printf("\n Multiplication of %d and %d is %d", l, m, n);
}
