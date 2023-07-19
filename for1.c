/* Using Of For Loop with multiple Conditions */
#include<stdio.h>
main()
{
    int b, c, d, f;
    //clrscr();
    for(b=1,c=10,d=1,f=10 ; b<=10,c>=1,d<=10,f>=1; b++, c--, d++, f--)
    {
        printf("%d \t %d \t %d \t %d \t \n", b, c, d, f );
    }
    printf("\n\n");

    for(b=1,c=10,d=1,f=10 ; f>=1; b++, c--, d++, f--)
    {
        printf("%d \t %d \t %d \t %d \t \n", b, c, d, f );
    }
    getch();
}
