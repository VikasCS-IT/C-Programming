#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 5;
    printf("%d\n",a);
    printf("%u\n",&a);
    char *b;
    //b = a;
    b = &a;
    printf("%d\n",b);
    printf("%d\n",*b);
    printf("%d\n",&b);
    int c;
    c = &a;
    printf("%d\n",c);
    printf("%d\n",&c);

    char character = 'x';
    char *ptr;
    char new1;
    ptr = &character;
    printf("\n Address of character is %u ", &character);
    printf("\n Address in Pointer Variable ptr is %u ", ptr);
    printf("\n Value in the character is %c ", character);
    printf("\n Value at the Address %u Stored is %c ", ptr,*ptr);
    new1 = *ptr;
    printf("\n Value in the new1 is %c ", new1);

}
