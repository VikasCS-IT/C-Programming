#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k=1,m,n;
    char c = '\t';
    for(i=5;i>=0;i--){
        for(j = i;j>0;j--){
            printf("%c",c);
        }
        for(m = 1;m<=k;m++){
            printf("%d\t",m);
        }
        for(n = m-1;n>1;n--){
            printf("%d\t",n-1);
        }
        k++;
        printf("\n");
    }
    getch();
}
