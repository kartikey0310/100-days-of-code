// Open an existing file (info.txt) and print all its lines using fgets() until EOF.

#include <stdio.h>
int main() 
{
    FILE *fp ;
    char line[100] ;

    fp = fopen("info.txt", "r");

    if ( fp == NULL )
    {
        printf("Error: could not open info.txt\n");
        return 1 ;
    }

    while ( fgets(line, sizeof(line), fp) != NULL )
    {
        printf("%s", line);
    }

    fclose(fp);

    return 0 ;
}