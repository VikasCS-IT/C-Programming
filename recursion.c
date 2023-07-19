#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int n;
    puts("Enter value for factorials:");
    scanf("%d",&n);
    printf("Factorial of %d is : %d",n,fact(n));
    getch();
}

int fact(int x)
{
    int ff;
    if(x==1)
        return (1);
    else
        return (ff = x*fact(x-1));
}
