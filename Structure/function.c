#include<stdio.h>
#include<conio.h>
struct inv
{
    int item, qty, price;
};
 void main()
{
    int x;
    struct inv item;
    //clrscr();
    printf("\n Enter Item code ");
    scanf("%d", &item.item );
    printf("\n Enter Quantity ");
    scanf("%d", &item.qty );
    printf("\n Enter Price ");
    scanf("%d", &item.price );
    x= value(item);
    printf("\n Price is %d ",x);
    getch();
}
void value(cal)
struct inv cal;
{
    int val;
    val = cal.qty * cal.price;
    return(val);
}



