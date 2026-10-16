// Find the length of the longest substring without repeating characters.

#include <stdio.h>
#include <string.h>
int main() 
{
    char s[100] = "" ;
    int lastSeen[256] ;
    int i , len , start = 0 , maxLen = 0 ;

    printf("Enter a string: ");
    scanf("%[^\n]", s);

    len = strlen(s) ;

    for ( i = 0 ; i < 256 ; i++ )
    {
        lastSeen[i] = -1 ;   // -1 means "this character has not been seen yet"
    }

    for ( i = 0 ; i < len ; i++ )
    {
        unsigned char ch = s[i] ;

        if ( lastSeen[ch] >= start )
        {
            start = lastSeen[ch] + 1 ;   // repeat inside the window: move the window start past it
        }

        lastSeen[ch] = i ;

        if ( i - start + 1 > maxLen )
        {
            maxLen = i - start + 1 ;
        }
    }

    printf("%d\n", maxLen);

    return 0 ;
}