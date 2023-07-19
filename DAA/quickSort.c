#include<stdio.h>
#include<conio.h>
void printArray(int *,int);
void quickSort(int *,int,int);
int partition(int *,int,int);
void main()
{
    int a[] = {2,8,5,6,7,0,10,3,9,4};
    int n = 10;
    printArray(a,n);
    quickSort(a,0,n-1);
    puts("After apply quick sort:");
    printArray(a,n);
    getch();
}

void printArray(int a[],int n)
{
    printf("Printing array is : \n[");
    for(int i = 0;i<n;i++){
        printf("%d,",a[i]);
    }
    printf("]\n\n");
}

void quickSort(int a[],int l,int n)
{
    int partitionIndex;
    if(l<n)
    {
        partitionIndex = partition(a,l,n);
        quickSort(a,l,partitionIndex - 1);
        quickSort(a,partitionIndex + 1,n);
    }
}

int partition(int a[],int l,int n)
{
    int pivot = a[l];
    int i = l + 1;
    int j = n ;
    int temp;
    do{
        while(a[i] <= pivot)
            i++;
        while(a[j] > pivot)
            j--;
        if(i<j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    while(i<j);

    temp = a[l];
    a[l] = a[j];
    a[j] = temp;
    return j;
}
