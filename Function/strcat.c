#include<stdio.h>
#include<conio.h>
void main()
{
    char a[] = {"vikas"};
    char b[] = {"kumar"};
    puts(a);
    puts(b);
    printf("%d\n",strlen(a));
    printf("%d\n",strlen(b));
    strcat(a,b);
    puts(a);
    char c[] = {"Vishal"};
    strcat(c," kumar");
    puts(c);
    strcat(strcat(b," Yadav")," Patel");    // Nesting string
    puts(b);

}
