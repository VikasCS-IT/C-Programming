#include<stdio.h>
#include<conio.h>
void main()
{
    int j[] = { 11,23,33,22,44,55,66};
    //clrscr();
    display ( &j[0], 6 );
}
display ( int *m, int n )
{
    int k;
    for( k = 0; k < n; k++ )
    {
        printf("\t Element = %d, ", *m );
        m++; //Increment Pointer to Point next Location
    }
}
