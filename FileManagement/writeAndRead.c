#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char ch;
    //clrscr();
    fp = fopen ("vikas.txt","w" );
    while((ch = getc(stdin))!= EOF )
        putc( ch, fp );
    fclose(fp);

    fp = fopen ("vikas.txt","r");
    while((ch = getc(fp)) != EOF )
        putc( ch, stdout );
    fclose(fp);
    getch();
}
