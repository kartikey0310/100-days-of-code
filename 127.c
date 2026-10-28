// Read text from input.txt, convert lowercase letters to uppercase, and write to output.txt.

#include <stdio.h>
int main() 
{
    FILE *in , *out ;
    int ch ;

    in = fopen("input.txt", "r");

    if ( in == NULL )
    {
        printf("Error: could not open input.txt\n");
        return 1 ;
    }

    out = fopen("output.txt", "w");

    if ( out == NULL )
    {
        printf("Error: could not create output.txt\n");
        fclose(in);
        return 1 ;
    }

    while ( (ch = fgetc(in)) != EOF )
    {
        if ( ch >= 'a' && ch <= 'z' )
        {
            ch = ch - 32 ;
        }

        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Converted text saved to output.txt\n");

    return 0 ;
}