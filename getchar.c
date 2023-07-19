/* Use of getchar Function */
#include<stdio.h>
main()
{
    int asc;
    printf("Type a Character and press Enter : ");
    asc = getchar();
    printf("\n The Key is %c", asc);
    printf("\n Ascii of the key is %d", asc);
    int a = 'L';
    char b = 3;
    printf("\n%d",a);
    printf("\n%c",b);
    printf("\n%c",a);
    printf("\n%d",b);
    getch();
}
