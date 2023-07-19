#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    struct emp
    {
        char name[20];
        int age;
        float salary;
    }e;
    fp = fopen("emp.txt","rb");
    while(fread(&e,sizeof(e),1,fp)==1)
        printf("\n%s\t%d\t%f\t",e.name,e.age,e.salary);
    fclose(fp);
    getch();
}
