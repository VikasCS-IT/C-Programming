#include<conio.h>
#include<stdio.h>
void main()
{
    struct Address
    {
        char name[15];
        char city[10];
        int room_no;
    };
    struct Address student1={"Kuldeep", "Falna", 9006};
    struct Address *stud1,*a;
    stud1 = &student1;
    struct Address vv =student1;
    a = &vv;
    //clrscr();
    printf("\n Name of student1 is %s ", stud1->name);
    printf("\n City of student1 is %s", stud1->city);
    printf("\n Room Number of student1 is %d", stud1->room_no);
    printf("\n Name of student1 is %s ", a->name);
    printf("\n City of student1 is %s", a->city);
    printf("\n Room Number of student1 is %d", a->room_no);
    getch();
}
