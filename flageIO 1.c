#include<stdio.h>
main()
{
    int a, b, c;
    //clrscr();
    printf("Enter Three Integers : ");
    scanf("%d %*d %d", &a, &b, &c);
    printf("\nThe Value of First Integer is %d ", a);
    printf("\nThe Value of Second Integer is %d", b );
    printf("\nThe Value of Third Integer is %d",c );
    getch();
}
