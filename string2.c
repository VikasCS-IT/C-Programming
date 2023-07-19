#include<stdio.h>
#include<conio.h>
#include<string.h>
void reverse(char*);
void main()
{
    char name[] = "vikas";
    reverse(name);
    puts(name);
    getch();
}
void reverse(char str[])
{
    int c,i,j;
    for(i=0,j=strlen(str)-1;i<j;i++,j--){
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
}
