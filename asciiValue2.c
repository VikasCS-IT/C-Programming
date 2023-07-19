#include<conio.h>
#include<stdio.h>
void main()
{
    int i=65,j=0;
    for(i;i<=122;i++){
        printf("|\t%d - %c\t\t",i,i);
        j++;
        if(j == 6){
            printf("|\n");
            j = 0;
        }
    }
}
