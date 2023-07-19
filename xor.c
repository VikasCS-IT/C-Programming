#include <stdio.h>
main()
{
    int x = 50, k=10;
    //clrscr();
    printf("\n Value of x is %d ", x);
    printf("\n\n Value of k is %d ", k);
    printf("\n\n k = %d is Masking the value of x = %d \n", k, x);
    x = x ^ k;
    printf("\n After XOR Masking the Value of x is %d \n", x);
    printf("\n k = %d is Masking the Changed Value of x = %d again", k, x);
    x = x ^ k;
    printf("\n\n Now the Value of x is changed again to %d ", x);
}
