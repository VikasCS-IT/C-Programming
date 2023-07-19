#include<stdio.h>
#include<conio.h>
struct stud
{
    char name[15];
    int ro_no, sub1, sub2, sub3, tot;
};
void main()
{
    struct stud stud1,sum();
    //clrscr();
    printf("\n Enter name of stud1 ");
    gets(stud1.name);
    printf("\n Enter roll number of stud1 ");
    scanf("%d",&stud1.ro_no);
    printf("\n Enter Marks of sub1 ");
    scanf("%d",&stud1.sub1);
    printf("\n Enter Marks of sub2 ");
    scanf("%d",&stud1.sub2);
    printf("\n Enter Marks of sub3 ");
    scanf("%d",&stud1.sub3);
    stud1=sum(stud1);
    printf("\n Name of Student1 is %s ", stud1.name);
    printf("\n Ro No of Student1 is %d ", stud1.ro_no);
    printf("\n Marks of Subject1 is %d ", stud1.sub1);
    printf("\n Marks of Subject2 is %d ", stud1.sub2);
    printf("\n Marks of Subject3 is %d ", stud1.sub3);
    printf("\n Total Marks is %d",stud1.tot);
    getch();
}
struct stud sum(stvar) // Function Declaration
struct stud stvar ;
{
    stvar.tot=stvar.sub1+stvar.sub2+stvar.sub3;
    return( stvar );
}
