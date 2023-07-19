#include<stdio.h>
#include<conio.h>
main()
{
    auto int num = 6;
    //clrscr();
    {
        auto int num =8;
        {
            auto int num = 1;
            printf("%d", num);
        }
        printf("%d", num);
    }
    printf("%d", num);
    getch();
}

