
#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp1, *fp2;
    int ch, j;
    //clrscr();
    fp1 = fopen ("apple.txt", "w" );
    printf("\n Enter Numbers ");
    for ( j=1; j<=20; j++)
    {
        ch = getw( stdin );
        putw ( ch, fp1 );
    }
    fclose(fp1);
    fp1 = fopen ( "apple.txt", "r" );
    while((ch = getw(fp1)) != EOF )
    {
        putw( ch, stdout );
    }
    fclose(fp1);
    getch();
}
