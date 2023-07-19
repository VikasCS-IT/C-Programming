#include<stdio.h>
#include<conio.h>
void main()
{
    int j[4], *k, *l;
    k = &j[1];
    l = &j[3];  // Substraction of two pointer
    //clrscr();
    printf("\n Address of j[1] is %u ", k);
    printf("\n Address of j[3] is %u ", l);
    printf("\n j[3] – j[1] = %u", l-k);
    getch();
}
