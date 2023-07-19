#include<stdio.h>
#include<conio.h>
void main()
{
    char a[] = {"vikas"};
    char b[] = {"kumar"};
    puts(a);
    puts(b);
    puts("Addtion of two string:");
    char c[13];
    for (int i = 0;i<6;i++){
        c[i] = a[i];
        if(a[i] == '\0'){
            c[i] = ' ';
            for (int j = 0;j<6;j++){
                i++;
                c[i] = b[j];
            }
        }
    }
    puts(c);
}
