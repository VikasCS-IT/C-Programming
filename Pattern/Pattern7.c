#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(i != j){
                printf("%d\t",i);
            }
            else{
                printf("%d#",i);
            }
        }
        printf("\n");
    }
    for(i=4;i>=1;i--){
        for(j=i;j>=1;j--){
            if(j != 1){
                printf("%d\t",i);
            }
            else{
                printf("%d#",i);
            }
        }
        printf("\n");
    }
    getch();
}
