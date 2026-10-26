// Open an existing file in append mode and add a new line of text at the end.

#include <stdio.h>
int main() 
{
    FILE *fp ;
    char text[200] ;

    fp = fopen("info.txt", "r");

    if ( fp == NULL )
    {
        printf("Error: info.txt does not exist.\n");
        return 1 ;
    }

    fclose(fp);

    fp = fopen("info.txt", "a");

    if ( fp == NULL )
    {
        printf("Error: could not open the file.\n");
        return 1 ;
    }

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("Text appended successfully.\n");

    return 0 ;
}