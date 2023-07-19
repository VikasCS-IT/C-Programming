#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char again = 'y';
    struct emp
    {
        char name[20];
        int age;
        float salary;
    };
    struct emp e;
    //clrscr();
    fp = fopen("Emp.txt", "w");
    while( again =='y' || again == 'Y' )
    {
        printf("\n Enter Name Age and Salary");
        scanf("%s %d %f", &e.name, &e.age, &e.salary);
        fprintf(fp, "%s %d %f\n", e.name, e.age, e.salary);
        printf("\n Do You Want To Enter Another Record : Y/N ");
        fflush(stdin);
        again = getchar();
        fp++;
    }
    fclose(fp);
    getch();
}
