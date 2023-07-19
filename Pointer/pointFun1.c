#include<stdio.h>
#include<conio.h>
void main()
{
    int *Pointer;
    int *Function();
    Pointer = Function();
    printf("%u\n",Pointer);
    getch();
}
int *Function()
{
    int I = 20;
    //printf("%d\n",&i);
    return (&I);
}
