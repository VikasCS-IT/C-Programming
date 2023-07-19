/* While Loop Example */
#include<stdio.h>
main()
{
    int x;
    //clrscr();
    x = 1;
    while(x<=100)
    {
        if( x % 2 == 0 && x % 3 == 0 )
            printf(" %d \n", x );
        x++;
    }
    getch();
}
