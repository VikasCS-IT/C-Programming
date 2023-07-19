#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for (i=4;i>0;i--){
        for (j=i;j>0;j--)
            printf("* ");
        printf("\n");
    }
    getch();
}
