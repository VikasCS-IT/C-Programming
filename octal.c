#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 4343;
    int b = 04343;
    int c = 0x4343;
    float d = 343434.4343;
    printf("%d\t%d\t%d",a,b,c);
    printf("\n%d",a);
    printf("\n%o",b);
    printf("\n%x",c);
    printf("\n%X",c);
    putchar('\n');
    putchar('V');
    printf("\n%x",b);
    printf("\n%f",d);
    printf("\n%e",d);
}
