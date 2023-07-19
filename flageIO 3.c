#include<stdio.h>
main()
{
    int a, b, c, tot;
    printf("\nEnter 5-digit first number:");
    scanf("%2d ",&a);
    fflush(stdin);
    printf("\n Enter 4-digit second number:");
    scanf("%3d",&b);
    fflush(stdin);
    printf("\n Enter 2-digit third number:");
    scanf("%4d",&c);
    fflush(stdin);
    tot=a + b + c;
    printf("\n First value is % d",a);
    printf("\n Second value is % d",b);
    printf("\n Third value is % d",c);
    printf("\n Total of three values is %d",tot);
    getch();
}
