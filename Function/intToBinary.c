#include<stdio.h>
#include<conio.h>
void binary(int);
void main()
{
    int bin;
    puts("Enter integer number");
    scanf("%d",&bin);
    puts("Binary numbers:");
    binary(bin);
    getch();
}

void binary(int x)
{
    int j,k,andMask;
    for(j = 7;j>=0;j--){
        andMask = 1 << j;
        k = x & andMask;
        k == 0 ? printf("0"):printf("1");
    }
}
