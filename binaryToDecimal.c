#include<stdio.h>
#include<conio.h>
#include<math.h>
// vikasstudyknowledge.blogspot.com
void main(){
    int decimal=0,weight=0, rem;
    unsigned long int binary, bin;
    printf("Enter binary number\n");
    scanf("%ld",&binary);
    bin = binary;
    while(binary != 0){
        rem = binary%10;
        decimal = decimal + rem*pow(2,weight);
        binary = binary/10;
        weight++;
    }
    printf("%ld is converted into decimal is : %d",bin,decimal);
    getch();
}
