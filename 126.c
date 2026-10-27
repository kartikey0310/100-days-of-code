// Ask for a filename, check if it exists, and display its content.

#include <stdio.h>
int main() 
{
    FILE *fp ;
    char fileName[100] ;
    char line[100] ;

    printf("Enter the file name: ");
    scanf("%99s", fileName);

    fp = fopen(fileName, "r");

    if ( fp == NULL )
    {
        printf("Error: file '%s' does not exist or cannot be opened.\n", fileName);
        return 1 ;
    }

    printf("Contents of %s:\n", fileName);

    while ( fgets(line, sizeof(line), fp) != NULL )
    {
        printf("%s", line);
    }

    fclose(fp);

    return 0 ;
}