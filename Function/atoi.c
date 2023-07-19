#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char years[] = {"2000"};
    int n;
    char year[] = {"vikas"};
    puts(year);
    printf("%s\n",strlwr(year));
    printf("%s\n",strupr(year));
    n = atoi(years);
    n = n - 10;
    printf("%d",n);
    getch();
}
