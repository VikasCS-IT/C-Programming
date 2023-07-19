#include<stdio.h>
#include<conio.h>
void create(int,int);
void del(int);
void compaction();
void display();
int fname[10],fsize[10],fstart[10],freest[10],freesize[10],m=0,n=0,start;
int main()
{
    int name,size,ch,i;
    int *ptr;
    ptr=(int *)malloc(sizeof(int)*100);
    start=freest[0]=(int)ptr;
    freesize[0]=500;
    printf(" Free start address\t\tFree Size\n");
    for(i=0; i<=m; i++)
        printf(" %d\t\t\t%d\n",freest[i],freesize[i]);
    while(1)
    {
        printf("1.Create.\n");
        printf("2.Delete.\n");
        printf("3.Compaction.\n");
        printf("4.Exit.\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the name of file : ");
            scanf(" %d",&name);
            printf("Enter the size of the file : ");
            scanf(" %d",&size);
            create(name,size);
            break;
        case 2:
            printf("Enter the file name which u want to delete : ");
            scanf(" %d",&name);
            del(name);
            break;
        case 3:
            compaction();
            printf("\n After compaction the tables will be :");
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("\n You have entered a wrong choice.");
        }
    }
}

void create(int name,int size)
{
    int i,flag=1,j,a;
    for(i=0; i<=m; i++)
        if( freesize[i] >= size)
            a=i,flag=0;
    if(!flag)
    {
        for(j=0; j<n; j++);
        n++;
        fname[j]=name;
        fsize[j]=size;
        fstart[j]=freest[a];
        freest[a]=freest[a]+size;
        freesize[a]=freesize[a]-size;
        printf("The memory map will now be :");
        display();
    }
    else
    {
        printf("\n No enough space is available.System compaction......");
        flag=1;
        compaction();
        display();
        for(i=0; i<=m; i++)
            if( freesize[i] >= size)
                a=i,flag=0;
        if(!flag)
        {
            for(j=0; j<n; j++);
            n++;
            fname[j]=name;
            fsize[j]=size;
            fstart[j]=freest[a];
            freest[a]+=size;
            freesize[a]-=size;
            printf("\n The memory map will now be :");
            display();
        }
        else
            printf("\n No enough space.");
    }
}

void del(int name)
{
    int i,j,k,flag=1;
    for(i=0; i<n; i++)
        if(fname[i]==name)
            break;
    if(i==n)
    {
        flag=0;
        printf("\n No such process exists.....");
    }
    else
    {
        m++;
        freest[m]=fstart[i];
        freesize[m]=fsize[i];
        for(k=i; k<n; k++)
        {
            fname[k]=fname[k+1];
            fsize[k]=fsize[k+1];
            fstart[k]=fstart[k+1];
        }
        n--;
    }
    if(flag)
    {
        printf("After deletion of this process the memory map will be :");
        display();
    }
}

void compaction()
{
    int i,j,size1=0,f_size=0;
    if(fstart[0]!=start)
    {
        fstart[0]=start;
        for(i=1; i<n; i++)
            fstart[i]=fstart[i-1]+fsize[i-1];
    }
    else
    {
        for(i=1; i<n; i++)
            fstart[i]=fstart[i-1]+fsize[i-1];
    }
    f_size=freesize[0];

    for(j=0; j<=m; j++)
        size1+=freesize[j];
    freest[0]=freest[0]-(size1-f_size);
    freesize[0]=size1;
    m=0;
}

void display()
{
    int i;
    printf("\n MEMORY MAP TABLE");
    printf("\n NAME\t\tSIZE\t\tSTARTING ADDRESS\n");
    for(i=0; i<n; i++)
        printf(" %d\t\t%d\t\t%d\n",fname[i],fsize[i],fstart[i]);
    printf("\n***  FREE SPACE TABLE  ***\n");
    printf("FREE START ADDRESS\t\tFREE SIZE\n");
    for(i=0; i<=m; i++)
        printf(" %d\t\t\t%d\n",freest[i],freesize[i]);
}
