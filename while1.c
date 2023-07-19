#include <stdio.h>
#include <conio.h>
main()
{
    long numberOfCharacters = 0 ;
    printf(" Enter characters how much you want. ");
    while ( getchar() != '\n')
        ++numberOfCharacters;
    printf("\n You have entered %ld Characters", numberOfCharacters);
    getch();
}
