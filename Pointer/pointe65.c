#include<stdio.h>
#include<conio.h>
// Compatison of two pointer
void main()
{
    int j[4], *k, *l;
    k = &j[3];
    l = &j[4 + 3];
    //clrscr();
    if( k == l)
        printf("\n Both Pointers Are Pointing the same Location");
    else
        printf("\n Both Pointers Are Not Pointing the same Location");
    getch();
}
