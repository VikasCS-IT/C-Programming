#include<stdio.h>
#include<conio.h>
void main()
{
    auto a, b;
    a = 3;
    b = 2.2;
    float c = a+b;
    printf("Addition of %d and %i is : %.2f\n",(a),b,c);
    printf("Addtion of %.2d and %d is : %.2f\n",a,(b),c,c);
    printf("Addition is : \n",a,b,c);
    printf("%d %d, %d %d \n");
    printf("Hi\r Vikas \n");
    printf("Addition of %d and %d is : %d\n",a,b,&c);
    printf("Addition of %d and %d is : %d\n");
    b = 6;
    char ab = 'a';
    printf("Hi Vikas\n");
    for(char i = a;i<26;i++){
        printf("%i\t",i);
    }
    printf("\n");
    char j = 'k';
    char k = 'vikas';
    printf("%c\n",k);
    printf("%d\n",j);
}
