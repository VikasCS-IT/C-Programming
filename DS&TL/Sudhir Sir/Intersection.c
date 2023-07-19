// Write a program in C to create two sets and perform the Intersection operation of these two sets.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],b[20],flag=0,p,q,i,j;
    //clrscr();
    printf("Enter set 1 size : ");
    scanf("%d",&p);
    printf("\n Enter set 1 elements : ");
    for(i=0; i<p; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Set 1 elements are :\n {");
    for(i=0; i<p; i++)
    {
        printf("\t %d, ",a[i]);
    }
    printf(" }");
    printf("\n\n Enter set 2 size : ");
    scanf("%d",&q);
    printf("\n Enter set 2 elements : ");
    for(j=0; j<q; j++)
    {
        scanf("%d",&b[j]);
    }
    printf("\n Set 2 elements are :\n {");
    for(j=0; j<q; j++)
    {
        printf("\t %d, ",b[j]);
    }
    printf(" }");
    printf("\n Intersection is : \n {");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            if(a[i]==b[j])
            {
                printf(" %d, \t",a[i]);
            }
        }
    }
    printf(" }");
    getch();
}
