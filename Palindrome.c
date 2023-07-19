#include<stdio.h>
#include<conio.h>
void main()
{
    int rem=0,n,temp = 0;
    printf("Enter number for convert in Palindrome : ");
    scanf("%d",&n);
    int copy = n;
    while(n!=0){
        rem = n%10;
        temp = (temp*10)+rem;
        n  = n/10;
    }
    if(copy == temp){
        printf("\n%d is Palindrome are same : %d",copy,temp);
    }
    else{
        printf("\n%d is not Palindrome",copy);
    }
}
