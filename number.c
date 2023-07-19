#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i = 1;i<=10;i++){
        for(j = i;j<=i*10;j=j+i){
            printf("%d\t",j);
        }
        printf("\n");
    }
}
