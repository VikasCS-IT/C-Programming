// Write a C program to verify Truth Table of AND, OR & NOT Gate.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][2],b[2][2],c[2],i,j;
    //clrscr();
    for(i=0; i<=1; i++)
    {
        for(j=0; j<=1; j++)
        {
            a[i][j]=(i&&j);
            b[i][j]=(i||j);
        }
    }
    for(i=0; i<=1; i++)
    {
        c[i]=(!i);
    }
    printf("\n Truth Table for AND(&&) is : \n");
    printf(" A B : C=A&&B\n");
    for(i=0; i<=1; i++)
    {
        for(j=0; j<=1; j++)
        {
            printf(" %d %d : %d\n",i,j,a[i][j]);
        }
    }
    printf("\n Truth Table for OR(||) is : \n");
    printf(" A B : C=A||B\n");
    for(i=0; i<=1; i++)
    {
        for(j=0; j<=1; j++)
        {
            printf(" %d %d : %d\n",i,j,b[i][j]);
        }
    }
    printf("\n Truth Table for NOT(!) is : \n");
    printf(" A	: !A\n");
    for(i=0; i<=1; i++)
    {
        printf(" %d	:	%d\n",i,c[i]);
    }
    getch();
}
