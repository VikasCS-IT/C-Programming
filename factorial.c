#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,fact=1;
    //clrscr();
    printf("Enter value for find fectorial number : ");
    scanf("%d",&n);
    for(i = n; i>0; i--){
        fact = fact*i;
    }
    printf("Fectorial of %d is : %d",n,fact);
    getch();
}
