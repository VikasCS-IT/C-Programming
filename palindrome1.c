#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    int i,j=0;
    char copy[10], string[] = {"madam"};

    printf("%s Your string\n",string);

    for(i=4;i>=0;i--){
        copy[j] = string[i];
        j++;
    }
    copy[j]='\0';
 //   printf("\n%s\n",copy);
    if(strcmp(copy,string)==0){
        printf("\n%s is Palindrome",string);
    }
    else{
        printf("\n%s is not Palindrome with %s",string, copy);
    }
    getch();
}
