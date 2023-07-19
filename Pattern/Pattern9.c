#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a=1,b=0;
    for(i=0;i<4;i++){
        for(j=0;j<=i;j++){
            if(j%2==0)
                printf("%d\t",a);
            else
                printf("%d\t",b);
        }
        a = a+b;
        b = a-b;
        a = a-b;
        printf("\n");
    }
    getch();
}
