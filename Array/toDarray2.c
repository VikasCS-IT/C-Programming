#include<stdio.h>
#include<conio.h>
main()
{
    int *arr[4]; //Array of Integer Pointers
    int i = 30, j = 40, k =50, l = 60;
    //clrscr();
    arr[0] = &i;
    arr[1] = &j;
    arr[2] = &k;
    arr[3] = &l;
    for( int m = 0; m < 4; m++ )
        printf("\n Value of All Pointers is %d ", *(arr[m]));
    getch();
}
