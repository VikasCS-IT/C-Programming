#include<stdio.h>
#include<conio.h>
void main()
{
    char *n[5];
    int j;
    //clrscr();
    for(j=0; j<5; j++)
    {
        printf("\n Enter String %d : ", j+1);
        scanf("%d",&n[j]);
    }
    printf("\nBase Address of Row1 is %u ",n[0]);
    printf("\nBase Address of Row2 is %u ",n[1]);
    printf("\nBase Address of Row3 is %u ",n[2]);
    printf("\nBase Address of Row4 is %u ",n[3]);
    printf("\nValue of Row1 is %s ",n[0]);
    printf("\nValue of Row2 is %s ",n[1]);
    printf("\nValue of Row3 is %s ",n[2]);
    printf("\nValue of Row4 is %s ",n[3]);
    getch();
}
