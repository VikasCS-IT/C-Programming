// Write an ALU implimentation program

#include<stdio.h>
#include<conio.h>

// Declaration of function.
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

// Main fuction
int main()
{
	int a, b;      // Variable declaration
	clrscr();      // Clear screen
	printf("Enter a value of a : ");   // Print message
	scanf("%d",&a);                    // Input value
	printf("Enter a value of b : ");
	scanf("%d",&b);
	printf("Addition of %d and %d is : %d\n",a,b,add(a,b));      // Function calling and printing
	printf("Subtraction of %d and %d is : %d\n",a,b,sub(a,b));
	printf("Multiplication of %d and %d is : %d\n",a,b,mul(a,b));
	printf("Division of %d and %d is : %d\n",a,b,div(a,b));
	getch();
	return 0;
}

// Fuction definition
int add(int a, int b)
{
	return (a+b);        // Add value and return
}

int sub(int a, int b)
{
	return (a-b);        // Subtract value and return
}

int mul(int a, int b)
{
	return (a*b);        // Multiply and return
}

int div(int a, int b)
{
	return (a/b);        // Divide and return
}

