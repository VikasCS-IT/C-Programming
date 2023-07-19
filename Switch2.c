#include<stdio.h>
main()
{
    char a;
    //clrscr();
    printf("Enter the character:\n");
    scanf("%c", &a);
    fflush(stdin);
    switch(a)
    {
    case 'R':
    case 'r':
        printf("\n Color is red\n");
        break;
    case 'g':
    case 'G':
        printf("\n Color is green\n");
        break;
    case 'b':
    case 'B':
        printf("\n Color is blue\n");
        break;
    default:
        printf("color is found");
        break;
    }
    getch();
}
