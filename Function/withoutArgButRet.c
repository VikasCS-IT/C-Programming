#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int a, b;
    //clrscr();

    printf("enter the factorial value:");
    scanf("%d", &a);

    b = fact(a);

    printf("fact = %d", b);
    getch();
}
int fact(int x)
{
    int i, sum=1;
    for(i=1; i<=x; i++)
        sum *= i;
    return(sum);
}
