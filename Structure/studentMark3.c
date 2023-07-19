#include<stdio.h>
#include<conio.h>
void main()
{
    struct subjects
    {
        int sub1;
        int sub2;
        int sub3;
    };
    struct stud
    {
        char name[15];
        int ro_no;
        struct subjects marks;
    };
    struct stud stud1,stud2;
    //clrscr();
    printf("\n Enter name of stud1 ");
    scanf("%s", stud1.name);
    printf("\n Enter roll number of stud1 ");
    scanf("%d",&stud1.ro_no);
    printf("\n Enter Marks of sub1 ");
    scanf("%d",&stud1.marks.sub1);
    printf("\n Enter Marks of sub2 ");
    scanf("%d",&stud1.marks.sub2);
    printf("\n Enter Marks of sub3 ");
    scanf("%d",&stud1.marks.sub3);
    printf("\n Name of Student1 is %s ", stud1.name);
    printf("\n Ro No of Student1 is %d ", stud1.ro_no);
    printf("\n Marks of Subject1 is %d ", stud1.marks.sub1);
    printf("\n Marks of Subject2 is %d ", stud1.marks.sub2);
    printf("\n Marks of Subject3 is %d ", stud1.marks.sub3);
    getch();
}
