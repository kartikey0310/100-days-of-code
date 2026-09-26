// Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100] ;
    int i , len , lastSpace = -1 ;

    printf("Enter a name: ");
    scanf("%[^\n]", str);

    len = strlen(str) ;

    // find the position of the LAST space in the string
    for ( i = 0 ; i < len ; i++ )
    {
        if ( str[i] == ' ' )
        {
            lastSpace = i ;
        }
    }

    // print initials for every word BEFORE the last space
    for ( i = 0 ; i < lastSpace ; i++ )
    {
        if ( i == 0 || str[i - 1] == ' ' )
        {
            if ( str[i] != ' ' )
            {
                printf("%c.", str[i]);
            }
        }
    }

    // print the surname (everything after the last space) in full
    printf(" %s\n", str + lastSpace + 1);

    return 0 ;
}