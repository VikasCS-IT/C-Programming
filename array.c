#include<stdio.h>
void main()
{
    int a[20],b[20],i,n=4;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[3]);
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    b[0] = a[0];
    for(i=0;i<n;i++){
        printf("%d\t",b[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        b[i+1] = a[i+1];
        printf("%d\t",b[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        a[i] = a[i+1];
    }
    for(i=0;i<n;i++){
        printf("\n%d\t",a[i]);
    }
}
