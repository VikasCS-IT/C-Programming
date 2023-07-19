#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
    int s,n;
    printf("Enter number of digits : \n");
    scanf("%d",&n);
    s = sum(n);
    printf("Sum of digits are : %d",s);
}
int sum(int n)
{
    if (n<10)
        return n;
    else
        return(n%10 + sum(n/10));
}
