#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[] = {"vikas"};
    char b[] = {'k','u','m','a','r'};
    puts(a);
    puts(b);
    printf("%d\n",strlen(a));
    printf("%d\n",strlen(b));
    char n;
    n = strcom(a,b);
    printf("%d\n",n);
}
