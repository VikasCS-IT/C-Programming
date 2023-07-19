#include<stdio.h>
#include<conio.h>
main()
{
    int s[5][2] = { {11,22},{33,44},{55,66},{77,88},{99,00}};
    int i, j;
    //clrscr();
    for( i = 0; i <5; i++ )
    {
        for( j = 0; j <= 1; j++ )
            printf("\n Value Of s[%d][%d]th Element is = %d",i,j,*( *( s + i ) + j ) );
        printf("\n");
    }
    getch();
}
