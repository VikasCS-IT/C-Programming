// Write a C program to find power set of a given set.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 20
void powerset(int a[],int);
void main()
{
    clrscr();
    int a[MAX];
    int size;
    int i;
    printf("enter the number of elements of set : ");
    scanf("%d",&size);
    printf("\nenter %d elements of set A : \n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n set A =");
    if(size==0)
    {
        printf("%c",237);
    }
    else
    {
        printf("{ ");
        for(i=0; i<size; i++)
        {
            printf("%d , ",a[i]);
        }
        printf(" }");
    }
    printf("\n\nPower set of set A is as follows:\n ");
    powerset(a,size);
    getch();
}

void powerset(int a[],int size)
{
    int i,j;
    int pi= pow(2,size);
    if(size==0)
    {
        printf("\np(A)={ %c } ",237);
    }
    else
    {
        printf("\np(A)={ ");
        for(i=0; i<pi; i++)
        {
            printf(" { ");
            for(j=0; j<size; j++)
            {
                if(i&(1<<j))
                {
                    printf(" %d, ",a[j]);
                }
            }
            printf(" }, ");
        }
    }
    printf(" } ");
    getch();
}
