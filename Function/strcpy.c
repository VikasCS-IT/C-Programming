#include<stdio.h>
#include<conio.h>
void main()
{
    char a[] = {"Vikas"};
    char b[] = {" Kumar"};
    char c[10];
    int aa = 3434;
    strcpy(c,a);
    puts(c);
    strcpy(c," Vishal");
    puts(c);
    printf("%d\n",strlen(c));
}
