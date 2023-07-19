#include<stdio.h>
#include<conio.h>
void main()
{
    int j = 10, *k;
    k = &j;
    printf("The address of k is %u \n",k);
    printf("The value of j is %d \n",j);
    k = k + 3;
    printf("Now the address of k is %u \n",k); // because int type 4 Byte then 4*3 = 12
    k = k - 3;
    printf("Now the address of k is %u \n",k);


}
