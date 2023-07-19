#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "ALU.h"
void main(){
    int a, b, ch;      // Variable declaration
	//clrscr();

	while(1){
        printf("\nWhat do you want to execute operation-\n");
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("0. Quite\n");
        printf("Please enter your choice value : \n");
        scanf("%d",&ch);
        if (ch==0)
            exit(0);
        printf("\n");
        switch(ch){
        case 1:
            printf("Enter a value of a : ");   // Print message
            scanf("%d",&a);                    // Input value
            printf("Enter a value of b : ");
            scanf("%d",&b);
            printf("Addition of %d and %d is : %d\n",a,b,add(a,b));
            break;
        case 2:
            printf("Enter a value of a : ");   // Print message
            scanf("%d",&a);                    // Input value
            printf("Enter a value of b : ");
            scanf("%d",&b);
            printf("Subtraction of %d and %d is : %d\n",a,b,sub(a,b));
            break;
        case 3:
            printf("Enter a value of a : ");   // Print message
            scanf("%d",&a);                    // Input value
            printf("Enter a value of b : ");
            scanf("%d",&b);
            printf("Multiplication of %d and %d is : %d\n",a,b,mul(a,b));
            break;
       case 4:
            printf("Enter a value of a : ");   // Print message
            scanf("%d",&a);                    // Input value
            printf("Enter a value of b : ");
            scanf("%d",&b);
            printf("Division of %d and %d is : %d\n",a,b,divi(a,b));
            break;
        case 5:
            printf("Enter a value of a : ");   // Print message
            scanf("%d",&a);                    // Input value
            printf("Enter a value of b : ");
            scanf("%d",&b);
            printf("%d Power %d is : %d\n",a,b,pow(a,b));
            break;
        default:
            printf("Wrong choice");
        }
	}
	getch();
	return 0;
}
