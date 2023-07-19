#include <stdio.h>
#include <conio.h>
//#include <alloc.h>
#include<malloc.h>
main()
{
    int j, k;
    char *ptr;
    //clrscr();
    // Memory Allocation For Inputting Integers
    printf("\n How Many charector You want to Enter?");
    scanf("%d", &j);
    ptr = (char *) calloc(j,5*sizeof(char));
    printf("\n Address of Allocated Memory Block is %u", ptr);
    for(k=1; k<=j; k++)
    {
        printf("\n Input %d charactor ", k);
        printf("At Address %u :\t", ptr);
        scanf("%c", ptr);
        ptr++;
    }
    printf("\n Address of Last Allocated Memory Block is %u \n", ptr);
    printf("\n Inputted charactor Are :\n");
    for(k=1; k<=j; k++)
    {
        ptr--;
        printf("\t\n\n %c \t ", *ptr);
        printf("At Address %u \t", ptr);
    }
    free(ptr);
    getch();
}

