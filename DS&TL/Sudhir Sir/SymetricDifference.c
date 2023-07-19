/* “Write a program in C to create two sets and perform symmetric difference operation on these two sets.” */

#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],b[20],c[20],p,q,i,j,k,fl=0;
    //clrscr();
    printf("Enter set 1 size : ");
    scanf("%d",&p);
    printf("\n Enter set 1 elements : ");
    for(i=0; i<p; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Set 1 elements are :\n{	");
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
    k=0;
    for(i=0; i<p; i++)
    {
        fl=0;
        for(j=0; j<q; j++)
        {
            if(a[i]==b[j])
            {
                fl=0;
                break;
            }
            else
            {
                fl=1;
            }
        }
        if(fl==1)
        {
            c[k]=a[i];
            k++;
        }
    }
    for(i=0; i<p; i++)
    {
        fl=0;
        for(j=0; j<q; j++)
        {
            if(b[i]==a[j])
            {
                fl=0;
                break;
            }
            else
            {
                fl=1;
            }
        }
        if(fl==1)
        {
            c[k]=b[i];
            k++;
        }
    }
    printf("\n\n Symmetric difference is :\n{ ");
    for(i=0; i<k; i++)
    {
        if(c[i]!=c[i+1])
        {
            printf(" %d, ",c[i]);
        }
    }
    printf(" }");
    getch();
}
