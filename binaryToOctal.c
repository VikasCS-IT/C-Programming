#include<stdio.h>
#include<conio.h>
void main(){
    long int binary, bin;
    int octal = 0, rem, i = 1;
    printf("Enter binary number\n");
    scanf("%ld",&binary);
    bin = binary;
    while(binary != 0){
        rem = binary%10;
        octal = octal + rem*i;
        i = i*2;
        binary = binary/10;
    }
    printf("%ld is converted into octal is : %lo",bin,octal);
    getch();
}
