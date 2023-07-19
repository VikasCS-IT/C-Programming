#include<stdio.h>
#include<conio.h>
void main()
{
    unsigned long int a;
    a = 4;
    printf("%d\n",a);

    /* Using "typedef" keyword we can short variable
    declaration like {unsinged long int} to {any}
    It are used mainly in structure and union. */

    typedef unsigned long int any;
    any b;  // b are also {unsigned long int} these type
    b = 5;
    printf("%d\n",b);
    any c=60,d=3;
    printf("%d,%d,%d,%d",a,b,c,d);
    getch();
}
