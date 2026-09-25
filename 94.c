// Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
int main() 
{
    char sentence[200] , longest[200] , word[200] ;
    int i , j = 0 , k ;

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);

    longest[0] = '\0' ;   // start with an empty "longest" word
    j = 0 ;

    for ( i = 0 ; i <= strlen(sentence) ; i++ )
    {
        if ( sentence[i] != ' ' && sentence[i] != '\0' )
        {
            word[j] = sentence[i] ;
            j++ ;
        }
        else
        {
            word[j] = '\0' ;

            if ( strlen(word) > strlen(longest) )
            {
                strcpy(longest, word) ;
            }

            j = 0 ;
        }
    }

    printf("Longest word is: %s\n", longest);

    return 0 ;
}