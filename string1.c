#include<stdio.h>
main()
{
    int x;
    char name[20], chara;
    //clrscr();
//Inputting String
    printf("Enter String and Press Enter\n");
    fflush(stdin);
    for(x=0; x!='\n'; x++)
    {
        scanf("%c", &chara);
        name[x] = chara;
    }
//Printing Inputted Array Elements
    printf("\n%s", name);
    getch();
}
