#include<stdio.h>
#include<conio.h>
void main()
{
    int j[] = { 11,23,33,22,44,55,66};
    int k,*h,i;
    h = j;
    //clrscr();
    for( k = 0; k < 7; k++ )
    {
        printf("\n address = %u ", &j[k] );
        printf("\t Element = %d ", j[k] );
    }
    printf("\n");
    for( k = 0; k < 7; k++ )
    {
        printf("\n address = %u ", h );
        printf("\t Element = %d ", *h );
        h++;
    }
    printf("\n");
    for(i = 0;i<7;i++){
        printf("\n Address Of %d Element is %u ", i+1, &j[i] );
        printf("\nElement with Statement j [ i ] = %d", j[i] );
        printf("\nElement with Statement *( j + i ] = %d", *(j+i));
        printf("\nElement with Statement *( i + j ) = %d", *( i+j));
        printf("\nElement with Statement i [ j ] = %d", i[j]);
    }
    getch();
}
