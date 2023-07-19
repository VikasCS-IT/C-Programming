#include <stdio.h>
main()
{
    int x = 10, y = 20, z = 30;
    printf("\n x = 10, y = 20, z = 30 \n");
    printf("\n ++x + y = %d", ++x + y);
    printf("\t x = %d, y = %d, z = %d", x, y, z);
    printf("\n y++ + z = %d", y++ + z);
    printf("\t x = %d, y = %d, z = %d", x, y, z);
    printf("\n --z + x = %d", --z + x);
    printf("\t x = %d, y = %d, z = %d", x, y, z);
    printf("\n y-- + x = %d", y-- + x);
    printf("\t x = %d, y = %d, z = %d", x, y, z);
}
