#include<stdio.h>
main()
{
    int a, b, c, x, y;
    int p, q, r;
    //clrscr();
    printf("Enter three integer number \n");
    scanf("%d %*d %d", &a, &b, &c);
    printf("%d %d %d", a, b, c);
    printf("\n\n Enter two 4-digit number \n");
    scanf("%2d %d ",&x, &y);
    printf("\n %d %d", x, y);
    printf(" Enter two integers\n");
    scanf("%d %d", &a, &x);
    printf("%d %d \n\n", a, x);
    printf("Enter a nine digit number \n");
    scanf("%3d %4d %3d ",&p, &q, &r);
    printf("%d %d %d",p, q, r);
    printf("Enter two three digit number \n");
    scanf("%d %d", &x, &y);
    printf("%d %d",x,y);
    getch();
}
