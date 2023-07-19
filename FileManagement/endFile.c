
#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char ch;
    //clrscr();
    printf("\n Input Name :");
    fp = fopen("Data.nam", "w" );
    while((ch = getc (stdin)) != EOF )
        putc (ch, fp);
    fclose (fp);
    getch();
}
