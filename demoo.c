#include<stdio.h>
#include<conio.h>
int sum(int);
int main(){
    int n;
    printf("Enter number for calculate sum of n numbers : \n");
    scanf("%d",&n);
    printf("Sum of %d number are : %d",n,sum(n));
    getch();
    return 0;
}


// Method 1

// int sum(int a){
//     return a*((a+1)/2);
// }

// Method 2

// int sum(int a){
//     int sum = 0;
//     for(int i =1;i<= a;i++){
//         sum = sum + i;
//     }
//     return sum;
// }

// Method 3

int sum(int a){
    int sum = 0;
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=i;j++){
            sum++;
        }
    }
    return sum;
}