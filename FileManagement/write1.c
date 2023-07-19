
#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char again = 'y';
    char name[20];
    int age;
    float salary;
    //clrscr();
    fp = fopen("employee.txt", "w");
    while( again =='y' || again == 'Y' )
    {
        printf("\n Enter Name, Age and Salary");
        scanf("%s%d%f", &name, &age,&salary);
        fprintf(fp,"%s%d%f\n", name, age, salary);
        printf("\n Do You Want To Enter Another Record : Y/N ");
        fflush(stdin);
        again = getchar();
    }
    fclose(fp);
    getch();
}
