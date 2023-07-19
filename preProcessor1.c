#include<stdio.h>
#include<conio.h>

#define CUBE(x)(x * x * x)
#define CCUBE(x)( (x) * (x) * (x) )

#define MAX(A,B) (((a) > (b)) ? (a) : (b))
#define MIN(A,B) (((a) < (b)) ? (a) : (b))
#define ABS(x) (((x) > 0 ) ? (x) : (-(x)))

#define X 10
#define PI 3.1415
#undef Y X+10       // Undefining a macro
#define SQUARE(z) ((z) * (z))
//#define CUBE(x) (SQUARE(x) * (z))

void main()
{
    int lside = 20, rside=5, total;
    total = CUBE(lside);    //total = ( lside * lside * lside );
    printf("%d\n",total);
    total = CCUBE(lside + rside);     //total = (( lside+rside ) * ( lside+rside) * ( lside+rside ));
    printf("%d\n",total);

    int a=5,b=10,c=15;
    printf("%d\n",MAX(a,b));
    printf("%d\n",MAX(a,(MAX(b,c))));   // Return max value from three value
    printf("%d\n",MIN(a,b));
    printf("%d\n",ABS(c));
    getch();
}
