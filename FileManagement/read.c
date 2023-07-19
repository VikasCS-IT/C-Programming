#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *ff;
    char ch;
    ff = fopen("data.nam","r");
    while((ch = getc(ff)) != EOF)
        //putc(ch,stdout);
        printf("%c",ch);
    fclose(ff);
    getch();
}
