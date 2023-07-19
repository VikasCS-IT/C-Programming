#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp, *ft;
    char another, choice;
    struct emp
    {
        char name[20];
        int age;
        float salary;
    };
    struct emp e;
    char e_name[20];
    long int recsize;
    fp =fopen("Emp.dat", "rb");
    {
        fp = fopen("Emp.dat", "wb");
        if(fp == NULL)
            perror("Could Not Open File");
    }
    recsize = sizeof(e);
    while(1)
    {
        //clrscr();
        gotoxy(30,10);
        printf("1 Add Records");
        gotoxy(30,12);
        printf("2 List Records");
        gotoxy(30,14);
        printf("3 Modify Records");
        gotoxy(30,16);
        printf("4 Delete Records");
        gotoxy(30,18);
        printf("0 Exit");
        gotoxy(30,20);
        printf("Enter Your Choice");
        fflush(stdin);
        choice = getchar();
        switch(choice)
        {
        case '1':
            fseek(fp, 0, SEEK_END);
            another = 'y';
            while(another == 'y')
            {
                printf("Enter Name Age and Salary:");
                scanf("%s %d %f", e.name, &e.age, &e.salary);
                fwrite(&e, recsize, 1, fp );
                printf("Do You Want To Add Another Record: Y/N");
                another = getche();
            }
            break;
        case '2':
            rewind(fp);
            while(fread(&e, recsize, 1, fp ) == 1)
                printf("\n %s\t %d\t %f\t", e.name, e.age, e.salary);
            break;
        case '3':
            another = 'y';
            while(another == 'y')
            {
                printf("Enter Name :");
                scanf("%s ", e_name);
                rewind(fp);
                while(fread(&e, recsize, 1, fp) ==1)
                {
                    if(strcmp(e.name, e_name) == 0)
                    {
                        printf("\n Enter New Name, Age and Salary :");
                        scanf("%s %d %f", e.name, &e.age, &e.salary);
                        fseek(fp, -recsize, SEEK_CUR);
                        fwrite(&e, recsize, 1, fp);
                        break;
                    }
                }
                printf("\n Do You Want To Modify Another Record");
                fflush(stdin);
                another = getche();
            }
            break;
        case '4':
            another = 'y';
            while(another == 'y')
            {
                printf("\n Enter name of Employee to Delete");
                scanf("%s", e_name);
                ft = fopen("TEMP.DAT", "wb");
                     rewind(fp);
                while(fread(&e, recsize, 1, fp) == 1)
                {
                    if(strcmp(e.name, e_name) != 0)
                        fwrite(&e, recsize, 1, ft);
                }
                fclose(fp);
                fclose(ft);
                remove("Emp.dat");
                rename("TEMP.DAT", "Emp.dat");
                fp = fopen("Emp.dat","rb+");
                printf("\n Delete Another Record : Y/N ");
                fflush(stdin);
                another = getche();
            }
            break;
        case '0' :
            fclose(fp);
            //exit();
        }
    }
}
