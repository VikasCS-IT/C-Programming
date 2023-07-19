#include <stdio.h>
#include <conio.h>
main()
{
    /* Declaration Section */
    int dob_DD, dob_MM, dob_YYYY;
    int cur_DD, cur_MM, cur_YYYY;
    char dummy;
    int age;
    /* Input Section */
    printf("Enter Date of Birth in DD/MM/YYYY Format : ");
    fflush(stdin);
    scanf("%2d%1c%2d%1c%4d", &dob_DD, &dummy, &dob_MM, &dummy, &dob_YYYY);
    printf("Enter Today's Date in DD/MM/YYYY Format : ");
    fflush(stdin);
    scanf("%2d%1c%2d%1c%4d", &cur_DD, &dummy, &cur_MM, &dummy, &cur_YYYY);
    /* Process Section */
    age = cur_YYYY - dob_YYYY;
    /* Output Section */
    printf("\n Your Date of Birth is : ");
    printf("%d%c%d%c%d", dob_DD, '/', dob_MM, '/', dob_YYYY);
    printf("\n And you are %d years old now", age);
}
