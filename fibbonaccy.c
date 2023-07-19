#include<stdio.h>
#include<conio.h>
main()
{
    int a = 0,b = 1,n,fibbo = 0;
    //clrscr()
    printf("Enter number for fibbonanccy series : ");
    scanf("%d",&n);

    printf("%d,%d,",a,b);
    for(int i = 2; i < n; i++){
        fibbo = a+b;
        a = b;
        b = fibbo;
        printf("%d,",fibbo);
    }
    getch();
}
