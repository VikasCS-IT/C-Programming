#include<stdio.h>
#include<conio.h>
void main()
{
    int s[5][2] = { {11,22},{33,44},{55,66},{77,88},{99,00}};
    int i, j;
    //clrscr();
    for( i = 0; i <= 3; i++ )
    {
        printf("\n Address Of %d One-Dimensional Array = %u ", i+1, s[i] );
    }
    getch();
}
