#include <stdio.h>
#include <conio.h>
main()
{
    long numberOfCharacters ;
    int l=0,c,s = 0,w = 0;
    printf(" Enter characters how much you want. ");
    for(numberOfCharacters=0; (c = getchar())!= EOF; ++numberOfCharacters){// Stop input press ctrl+z
        if(c == '\n')
            ++l;
        if(c == ' '){
            printf("\n");
            ++s;
            ++w;
        }
        printf("%c",c);
    }
    printf("\n You have entered %ld Characters",numberOfCharacters-1);
    printf("\n Number of lines : %d",l);
    printf("\n Number of spaces in : %d",s);
    printf("\n Number of words in : %d",w+1);
    getch();
}
