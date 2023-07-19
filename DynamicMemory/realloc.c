#include <stdio.h>
//#include <alloc.h>
#include <string.h>
#include<malloc.h>
main()
{
    char *str;
    /* Allocate Memory for string */
    str = (char *) malloc(10);
    /* copy "Hello" into string */
    strcpy(str, "Hello vikas kumar");
    printf("String is %s\n Address is %u\n", str, str);
    str = (char *) realloc(str, 20);
    printf("String is %s\n New address is %u\n", str, str);
    /* free Memory */
    free(str);
    getch();
}
