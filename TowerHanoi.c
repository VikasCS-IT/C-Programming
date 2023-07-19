#include<stdio.h>
#include<conio.h>
void hanoi(int,char,char,char);
void main()
{
    int n;
    char a = 'A',b = 'B',c = 'C';
    printf("Enter number of disks : ");
    scanf("%d",&n);
    printf("\nTower of Hanoi problem with %d disks\n",n);
    printf("Sequence is : \n\n");
    hanoi(n,a,b,c);
    printf("\n");
}
void hanoi(int n,char a,char b,char c)
{
    if(n != 0){
        hanoi(n-1,a,c,b);
        printf("Move disks %d from %c to %c\n",n,a,c);
        hanoi(n-1,b,a,c);
    }
}
