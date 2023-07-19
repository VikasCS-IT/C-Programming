#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n=5;
    char c = '\t';
    for(i=1;i<6;i++){
        for(k=1;k<i;k++){
            printf("%c",c);
        }
        for(j=n;j>=1;j--){
            printf("*\t");
        }
        n--;
        printf("\n");

    }
    getch();
}
