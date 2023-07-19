#include<stdio.h>
#include<conio.h>
void main(){
    int decimal, rem, i=0, j, dec;
    int binary[15];
    printf("Enter decimal number\n");
    scanf("%d",&decimal);
    dec = decimal;
    while(decimal != 0){
        rem = decimal%2;
        binary[i] = rem;
        decimal = decimal/2;
        i++;
    }
    printf("%d is converted into binary is : ",dec);
    for (j = i-1;j>=0;j--){
        printf("%d ",binary[j]);
    }
    getch();
}
