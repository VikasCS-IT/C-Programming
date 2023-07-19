#include<stdio.h>
#include<conio.h>
float bigest();
void main()
{
    float value[10],large;
    int j;
    for(j=0;j<10;j++){
        printf("Enter %d value ",j+1);
        scanf("%f",&value[j]);
    }
    large = bigest(value,10);
    printf("\nLargest value is %f : ",large);
    getch();
}

// User define function
float bigest(float Array[],int size)
{
    int j;
    float max;
    max = Array[0];
    for (j = 1;j<size;j++)
        if(max<Array[j])
            max = Array[j];
    return (max);

}
