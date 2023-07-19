/* Example of switch Condition Statement */
#include<stdio.h>
main()
{
    int marks, a;
    //clrscr();
    printf("\n Enter Marks");
    scanf("%d", &marks);
    a = marks / 10;
    switch ( a )
    {
    case 10 :
    case 9 :
    case 8 :
        printf("HONOURS");
        break;
    case 7 :
    case 6 :
        printf("FIRST DIVISION");
        break;
    case 5 :
        printf("SECOND DIVISION");
        break;
    case 4 :
        printf("THIRD DIVISION");
        break;
    default :
        printf("FAIL");
        break;
    }
    getch();
}

