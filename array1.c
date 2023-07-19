#include<stdio.h>
main()
{
    int i, num[10];
    int a[3] = {3,4,5};
    int b[5] = {2,3};
    int c[5] = {3,4,3,4,5};

    char name[5] = {'v','i','k','a','s','\0'};
    //char name[5] = {"vikas"};
    for(i=0;i<5;i++){
        printf("%c",name[i]);
    }
    printf("\n");


    for(i=0; i< 3; i ++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");


    for(i=0; i<5; i ++)
    {
        printf("%d\t",b[i]);
    }
    printf("\n");
    for(i=0; i<5; i ++)
    {
        printf("%d\t",c[i]);
    }
    getch();
}
