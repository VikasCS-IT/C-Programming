#include <stdio.h>
#include <conio.h>
void printArray(int *, int);
void shellSort(int *, int);
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    puts("Enter elements of array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printArray(a, n);
    shellSort(a, n);
    puts("After apply algorithm of shell sort-\n");
    printArray(a, n);
    getch();
    return 0;
}

void printArray(int a[], int n)
{
    printf("Your array is : \n[");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("]\n");
}

void shellSort(int a[], int n)
{
    int gap, temp, i, j;
    for (gap = n / 2; gap >= 1; gap = gap / 2)
    {
        for (j = gap; j < n; j++)
        {
            for (i = j - gap; i >= 0; i = i - gap)
            {
                if (a[i + gap] > a[i])
                    break;
                else
                {
                    temp = a[i];
                    a[i] = a[i + gap];
                    a[i + gap] = temp;
                }
            }
        }
    }
}
