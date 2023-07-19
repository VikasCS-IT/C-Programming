#include<stdio.h>
#include<conio.h>
void main()
{
    char *cp, name[] = {"RAM"};
    cp = &name;
    //clrscr();
    while(*cp != '\0' )
    {
        printf("\n Character %c Stored At Address %u ", *cp, cp);
        cp++;
    }
    getch();
}
