// Q97: Print the initials of a name.

#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100] ;
    int i , len ;

    printf("Enter a name: ");
    scanf("%[^\n]", str);

    len = strlen(str) ;

    for ( i = 0 ; i < len ; i++ )
    {
        if ( i == 0 || str[i - 1] == ' ' )
        {
            if ( str[i] != ' ' )
            {
                printf("%c.", str[i]);
            }
        }
    }
    printf("\n");

    return 0 ;
}