#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k, l, a = 1;
    for (i = 5; i > 0; i--)
    {
        for (j = i - 1; j > 0; j--)
        {
            printf("\t");
        }
        for (k = a; k > 0; k--)
        {
            printf("%d\t", k);
        }
        if (a > 1)
        {
            for (l = 2; l <= a; l++)
            {
                printf("%d\t", l);
            }
        }
        a++;
        printf("\n");
    }
}