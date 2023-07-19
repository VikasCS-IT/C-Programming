#include<stdio.h>
main()
{
    int age;
    char name[30];
    //clrscr();
    printf("Enter Name\n");
    gets(name);
    printf("\nEnter Age");
    scanf("\n%d", &age);
    age=age+1;
    printf("\nYour Name is %s", name);
    printf("\nYour Age Will Be %d Next Year", age);
    getch();
}

