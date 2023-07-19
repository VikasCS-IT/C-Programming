#include<stdio.h>
#include<conio.h>
void main()
{
    int j, k, c, d;
    //clrscr();
    printf("\n Enter first and Second Value:");
    scanf("%d %d", &j, &k);
    c = sum (j, k);
    printf("\n Sum of %d and %d is %d", j, k, c);
    d = mul (j, k);
    printf("\n Multiplication of %d and %d is %d", j, k, d);
    getch();
}
sum ( int x, int y)
{
    int z;
    z = x + y;
    return (z );
}

mul (int l, int m )
{
    int n;
    n = l * m;
    return ( n );
}
