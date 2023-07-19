#include<stdio.h>
#include<conio.h>
#define Male 1
#define Female 1
#define Single 20
#define Single1 "vikas"
#define Married 1
#define Divorced 2
#define Widowed 4
void main()
{
    struct stu_status
    {
        unsigned gender : 1;
        unsigned mar_stat : 1;
        unsigned hobby : 3;
        unsigned option : 6;
    };
    struct stu_status Student1;
    Student1.gender = Male;
    Student1.mar_stat = Married;
    Student1.hobby = 6;
    Student1.option = Single;
    printf("\n Gender = %d", Student1.gender );
    printf("\n Marital Status = %d", Student1.mar_stat );
    printf("\n Hobby = %d", Student1.hobby);
    printf("\n Option = %d", Student1.option );
    printf("\n Divored = %d", Divorced );
    printf("\n Single = %s", Single1);
    printf("\n Widowed = %d", Widowed );
    printf("\n Size of stu_status = %d",sizeof(struct stu_status));
    printf("\n Size of Single = %d",sizeof(Single));
    printf("\n Size of Male = %d",sizeof(Male));
    printf("\n Size of Student1 = %d",sizeof(Student1));
    getch();
}
