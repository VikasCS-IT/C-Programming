#include<stdio.h>
main()
{
    int age;
    char name[30];
    puts("Enter Name");
    gets(name);
    puts("Enter Age");
    scanf("%d", &age);
    age=age+1;
    puts("Your Name is ");
    puts(name);
//OR printf("Your Name is %s", name);
    printf("Your Age Will Be %d Next Year", age);
}
