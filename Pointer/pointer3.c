#include<stdio.h>
#include<conio.h>
void main()
{
    char ch, *chp = &ch;
    int num, *nump = &num;
    float digit, *digitp = &digit;
    //clrscr();
    printf("\n Address of ch is %u", chp);
    chp++;
    printf("\n After Increasing the Address of ch is %u", chp);
    chp++;
    printf("\n After Increasing the Address of ch is %u", chp);
    printf("\n \n Address of integer num is %u", nump);
    nump++;
    printf("\n After Increasing the Address of integer num is %u", nump);
    nump++;
    printf("\n After Increasing again Address of integer num is %u", nump);
    printf("\n \n Address of float digit is %u", digitp);
    digitp++;
    printf("\n After Increasing the Address of float digit : %u", digitp);
    digitp++;
    printf("\n After Increasing again Address of float digit :%u", digitp);
    getch();
}

