#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    char name[50];

    printf("%c%c%c%c%c",86,73,75,65,83);
    printf("\n\n");

    printf("Enter your name : ");
    gets(name);
    printf("\n");
    puts(name);
    printf("\n");
    for(i=0;i<strlen(name);i++){
        printf("%c => %d\n",name[i],name[i]);
    }
}
