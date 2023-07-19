#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    //clrscr();
    printline();
    printf("\nEnter values of a and b ");
    scanf("%d%d",&a,&b);
    c = a+b;
    printf("\nThe sume of %d and %d is : %d\n",a,b,c);
    printline();

    // Example
    printf("\n\n");
    printequale();
    value();
    printequale();
    getch();
}

// User defined function

/* void printline(void)
    int x;
    for(x = 0;x<=40;x++){
        printf("-");
    }
*/
printline()
{
    int x;
    for(x = 0;x<=40;x++){
        printf("-");
    }
}

printequale()
{
    int i;
    for (i=1;i<=35;i++){
        printf("%c",'=');
    }
}

value()
{
    int year, period;
    float inrate, sum, principal;
    printf("\n principal amount :");
    scanf("%f", &principal);
    printf("\n Interest rate?");
    scanf("%f", &inrate);
    printf("\n period?");
    scanf("%d", &period);
    sum=principal;
    year=1;
    while(year<=period)
    {
        sum*=(1+inrate);
        year+=1;
    }
    printf("\n%8.2f\n \n%5.2f \n%5d\n \n%12.2f\n",principal,inrate,period,sum);
}
