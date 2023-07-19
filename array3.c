#include<stdio.h>
#include<conio.h>
main()
{
    int inte[10] = {1,2,3,4,5,6,7,8,9,10};
    char chare[10] = {'v','i','k','a','s','\0'};
    float floate[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("[");
    for(int i = 0;i<10;i++){
        printf("%d,",inte[i]);
    }
    printf("]\n");

    printf("[");
    for(int i = 0;i<10;i++){
        printf("%c,",chare[i]);
    }
    printf("]\n");

    printf("[");
    for(int i = 0;i<10;i++){
        printf("%f,",floate[i]);
    }
    printf("]\n");
    getch();
}
