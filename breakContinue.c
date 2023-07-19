//* Use of Break and Condition Statement */
#include<stdio.h>
main()
{
    int a;
    //clrscr();
    for(a=1; a<=20; a++)
    {
        if( a == 11 )
            break;
        printf("%d\t", a);
    }
    printf("\n");
    for(a=1; a<=20; a++)
    {
        if(a > 10)
            continue;
        printf("%d\t", a);
    }
    getch();
}
