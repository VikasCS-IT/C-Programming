#include<stdio.h>
#include<conio.h>
void main()
{
    enum stu_status
    {
        pass, fail, supplementary
    };
    struct Students
    {
        char name[20];
        int age;
        int class1;
        enum stu_status stud;
    };
    struct Students Student1;
    strcpy( Student1.name, "Kuldeep" );
    Student1.age = 20;
    Student1.class1 = 12;
    Student1.stud = pass;
    printf("\n Name %s", Student1.name);
    printf("\n Age %d", Student1.age);
    printf("\n Class %d", Student1.class1);
    printf("\n Status %d", Student1.stud);
    if(Student1.stud == fail )
        printf("\n %-s is Fail", Student1.name );
    else
        printf("\n %-s is Not Fail ", Student1.name );


    getch();
}
