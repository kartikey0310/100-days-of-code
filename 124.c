// Copy all content from a source file to a destination file using fgetc() and fputc().

#include <stdio.h>
int main() 
{
    FILE *src , *dest ;
    char srcName[100] , destName[100] ;
    int ch ;

    printf("Enter the source file name: ");
    scanf("%99s", srcName);

    printf("Enter the destination file name: ");
    scanf("%99s", destName);

    src = fopen(srcName, "r");

    if ( src == NULL )
    {
        printf("Error: could not open the source file.\n");
        return 1 ;
    }

    dest = fopen(destName, "w");

    if ( dest == NULL )
    {
        printf("Error: could not create the destination file.\n");
        fclose(src);
        return 1 ;
    }

    while ( (ch = fgetc(src)) != EOF )
    {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");

    return 0 ;
}