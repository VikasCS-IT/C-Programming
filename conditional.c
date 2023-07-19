#include <stdio.h>
#include <conio.h>
main()
{
    int num1 = 10, num2 = 30, big;
    char ab;
    big = num1 > num2 ? num1 : num2;
    printf("Biggest Number in %d and %d is = %d\n", num1, num2, big);
    scanf("%[...]",&ab);
    printf("\nBiggest Number in %d and %d is = %d\n", num1, num2, big);
    printf("\nBiggest Number in %d and %d is = %d\n", num1, num2, big);

    getch();
}
