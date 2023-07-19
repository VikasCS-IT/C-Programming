#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k;
    k = 5;
    for(i=1;i<=5;i++){
        for(j=k;j>=1;j--){
            printf("*\t");
        }
        printf("\n\n");
        k--;
    }
    for(i=1;i<=5;i++){
        for(j=1;j<i+1;j++){
            printf("*\t");
        }
        printf("\n\n");
    }
    getch();
}
