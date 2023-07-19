#include<stdio.h>
#include<conio.h>
void main()
{
    funs();
    funs();
    funs();
    funa();
    funa();
    funa();
    getch();
}
funs()
{
    static int m = 0;
    m = m + 1;
    printf("\n m=%d",m);
}
funa()
{
    auto int m = 0;
    m = m + 1;
    printf("\n m=%d",m);
}
