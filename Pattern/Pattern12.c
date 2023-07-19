#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k = 1, m, n, p, s = 10;
    for (i = 5; i >= 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            printf("\t");
        }
        for (m = 1; m <= k; m++)
        {
            printf("*\t", m);
        }
        k = k + 2;
        printf("\n");
    }
    for (i = 1; i < 6; i++)
    {
        for (k = 0; k < i; k++)
        {
            printf("\t");
        }
        for (p = s; p > 1; p--)
        {
            printf("*\t");
        }
        s = s - 2;
        printf("\n");
    }
    getch();
}
