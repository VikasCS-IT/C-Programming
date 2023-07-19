#include <stdio.h>
#include <conio.h>
//#include <alloc.h>
#include<malloc.h>
main()
{
    int *ptr, j, k;
    //clrscr();
    // Memory Allocation For Inputting Integers
    ptr = (int * ) malloc (sizeof ( int ) );
    printf("\n Address of Allocated Memory Block is %u", ptr);
    printf("\n How Many Integers You want to Enter?");
    scanf("%d", &j);
    for(k=1; k<=j; k++)
    {
        printf("\n Input %d Integer ", k);
        printf("At Address %u :\t", ptr);
        scanf("%d", ptr);
        ptr++;
    }
    printf("\n Address of Last Allocated Memory Block is %u \n", ptr);
    printf("\n Inputted Integers Are :\n");
    for(k=1; k<=j; k++)
    {
        ptr--;
        printf("\t\n\n %d \t ", *ptr);
        printf("At Address %u \t", ptr);
    }
    free(ptr);
}
