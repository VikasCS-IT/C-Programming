#include<conio.h>
#include<stdio.h>
main( int argc, char *argv[])
{
    FILE *fs, *ft;
    char ch;
    if( argc != 3 )
    {
        printf("Arguments Mismatch");
        exit();
    }
    fs = fopen("argv[1]", "r");
    if( fs == NULL )
    {
        perror("Could Not Open File");
    }
    ft = fopen("argv[2]", "w");
    if( ft == NULL )
    {
        perror("Could Not Open File");
        fclose( fs );
    }
    while(1)
    {
        ch = fgetc( fs );
        if(ch == EOF)
            break;
        else
            fputc(ch, ft);
    }
    fclose(fs);
    fclose(ft);
    printf("File Copied Successfully");
}
