#include<stdio.h>
#include<conio.h>
void main()
{
    int k=0,l=0,n,i,j;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n],even[n],odd[n];
    printf("Enter number of elements in array : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Your given array elements are : \n[");
    for(i=0;i<n;i++)
        printf("%d,\t",a[i]);
    printf("]\n\n");

    for(j=0;j<n;j++){
        if(a[j]%2==0){
            even[k] = a[j];
            k++;
        }
        else{
            odd[l] = a[j];
            l++;
        }
    }
    printf("Total Even number are : \n[");
    for(i=0;i<k;i++)
        printf("%d,\t",even[i]);
    printf("]\n");
    printf("\nTotal size of even number are : %d\n\n",k);
    printf("Total Odd number are : \n[");
    for(j=0;j<l;j++)
        printf("%d,\t",odd[j]);
    printf("]\n");
    printf("\nTotal size of odd number are : %d\n",l);
}
