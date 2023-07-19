#include<stdio.h>
#include<conio.h>
main()
{
    int a = 12345;
    float b = 12345.6789;
    printf("%d",a);
    printf("\n%3d",a);
    printf("\n%10d",a);  // Blank space in left side than after print value
    printf("\n%010d",a); // Fill zero in left side after fill value
    printf("\n%-10d", a); // Print in left side than after print value

    printf("\n");
    printf("\n%10.4f",b);
    printf("\n%10.2f",b);
    printf("\n%-10.2f",b);
    printf("\n%f",b);
    printf("\n%f",-b);
    int w=10,p=2;
    printf("\n%*.*f",w,p,b);

    printf("\n");
    printf("\n%10.4e",b);
    printf("\n%10.2e",b);
    printf("\n%-10.2e",b);
    printf("\n%e",b);
    printf("\n%e",-b);

    printf("\n\n");
    char c = 'K';
    printf("\n%c", c);
    printf("\n%2c", c);
    printf("\n%3c", c);
    printf("\n%4c", c);
    printf("\n%3c", c);
    printf("\n%2c", c);
    printf("\n%c",c);

    printf("\n\n");
    char x[20] = "VIKAS";
    printf("\n%s", x);
    printf("\n%2s",x);
    printf("\n%20s", x);
    printf("\n%20.8s", x);
    printf("\n%.2s", x);
    printf("\n%-20.8s", x);
    getch();
}
