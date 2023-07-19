#include<stdio.h>
#include<conio.h>
void main()
    // getc and putc both are use only charecters.
    // getw and putw both are use numbers.
{
    FILE *fd;
    char ch;
    fd = fopen("vikas.txt","a+");   // a+ or +a both are same.
    while((ch = getc(stdin)) != EOF)    // getchar() or getc()==fgetc();
        putc(ch,fd);    // putchar() or putc()==fputc();
    fclose(fd);

    getch();
}
