#include<stdio.h>
#include<conio.h>
void main(){
    long int binary, bin, hexadecimal = 0;
    int i = 1, rem;
    printf("Enter binary number\n");
    scanf("%ld",&binary);
    bin = binary;
    while(binary != 0){
        rem = binary%10;
        hexadecimal = hexadecimal + rem*i;
        i = i*2;
        binary = binary/10;
    }
    printf("%d is converted into hexadecimal is : %lX",bin,hexadecimal);
    getch();
}
