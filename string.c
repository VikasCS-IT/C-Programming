/* Inputting Name and Age & Getting Name and Age one Year Incremented in output */
#include<stdio.h>
main()
{
    /* Declaration Section */
    int age;
    char name[30];
    //clrscr();
    /* Input Section */
    printf("Enter Name\n");
    scanf("%s",name);
    printf("\n Enter Age");
    scanf("\n%d",&age);
    /* Process Section */
    age=age+1;
    /* Output Section */
    printf("Your Name is %s", name);
    printf("\nYour Age Will Be %d Next Year", age);
    getch();
}
