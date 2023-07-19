#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    struct marks
    {
        int math;
        int hindi;
        int eng;
    };

    //static struct marks Student[4] = {{41,12,22}, {52,55,66}, {32,55,68}, {55,44,88}};

    struct marks stud[4];
    int k;
    //clrscr();
    for( k = 0; k < 4; k++)
    {
        printf("\n Enter marks of Student %d ", k+1);
        printf("\n Enter Mark of math ");
        scanf("%d", &stud[k].math);
        printf("\n Enter Mark of hindi ");
        scanf("%d", &stud[k].hindi);
        printf("\n Enter Mark of eng ");
        scanf("%d", &stud[k].eng);
    }

    for( k = 0; k < 4; k++)
    {
        printf("\n Student %d ",k+1 );
        printf("\t\t Mark of math is %d ",stud[k].math);
        printf("\n\t Mark of hindi is %d ",stud[k].hindi);
        printf("\n\t Mark of eng is %d ",stud[k].eng);
    }
    getch();
}
