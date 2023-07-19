
#include<stdio.h>
main()
{
    int num[10], square[10], i;
//clrscr();
// Inputting Array Elements
    for(i=0; i<10; i++)
    {
        printf ("Enter %d Element", i);
        scanf("%d", &num[i]);
    }
    /* Calculating Square of Every Element And
    Placing that in square Array */
    for(i=0; i<10; i++)
    {
        square[i] = num[i] * num[i];
    }
//Displaying Both Array Elements
    for(i=0; i<10; i++)
    {
        printf("\n Square of %d is %d", num[i], square[i]);
    }
    getch();
}
