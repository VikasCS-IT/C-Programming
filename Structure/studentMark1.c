#include<stdio.h>
#include<conio.h>
void main()
{
    struct marks
    {
        int sub[3];
    };
    struct marks stud[3];
    int k,l;
    for( k = 0; k < 3; k++)
    {
        printf("\n Enter marks of Student %d ", k+1);
        for(l = 0; l < 3; l++)
        {
            printf("\n Enter Mark of sub %d ",l+1);
            scanf("%d", &stud[k].sub[l]);
        }
    }

    for( k = 0; k < 3; k++)
    {
        for(l = 0; l < 3; l++)
        {
            printf("\n Student %d ",k+1 );
            printf("\t\t Mark of sub %d is %d ",l+1,stud[k].sub[l]);
        }
    }
    getch();
}
