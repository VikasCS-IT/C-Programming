/* Use of goto Statement */
#include<stdio.h>
#include<conio.h>
main()
{
    int i=0;
    //clrscr();
    next:
    i++;
    if(i<=10)
    {
        printf("\n%d", i);
        goto next;
    }
    getch();
    return(0);
}
