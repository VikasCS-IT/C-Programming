#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,choice;
    // clrscr()
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("\nEnter value of b : ");
    scanf("%d",&b);
    printf("What do you perform operation\nPlease choose your choice from given below:-\n1. Addition\n2. Substraction\n"
           "3. Multiplication\n4. Division\n5. Compare value\n6. Print 10 natureal numbers\n\n");
    scanf("%d",&choice);
    printf("\n\n");
    switch(choice)
    {
    default:
        printf("Wrong choice value");
        break;
    case 1:
        printf("Addition of %d and %d is : %d",a,b,(a+b));
        break;
    case 2:
        printf("Substraction of %d and %d is : %d",a,b,(a-b));
        break;
    case 3:
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4:
        printf("Division of %d and %d is : %d",a,b,a/b);
        break;
    case 5:
        if(a>b)
            printf("%d is a greater",a);
        else
            printf("%d is a greater",b);
        break;
    case 6:
        for(int i = 1;i<=10;i++)
            printf("%d\n",i);
        break;
    }
}
