#include <stdio.h>
main()
{
    char x = 'A', y = 'p';
    printf("\n x - y = %c ", y - x);
    printf("\n x += 37 = %c ", x += 37);
    printf("\n (++y + 53)-(x += 12) = %c", (++y + 53)-(x += 12));
    printf("\n x * 2 - 60 = %c", x * 2 - 60);
    printf("\n y / 2 + 20 = %c", y / 2 + 20);
}
