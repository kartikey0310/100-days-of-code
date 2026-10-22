// Change a string to sentence case.

#include <stdio.h>
int main() 
{
    char str[200] = "" ;
    int i , capitalizeNext = 1 ;   // 1 means "the next letter should be capital"

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') )
        {
            if ( capitalizeNext == 1 )
            {
                if ( str[i] >= 'a' && str[i] <= 'z' )
                {
                    str[i] = str[i] - 32 ;   // make it capital
                }
                capitalizeNext = 0 ;
            }
            else
            {
                if ( str[i] >= 'A' && str[i] <= 'Z' )
                {
                    str[i] = str[i] + 32 ;   // make it small
                }
            }
        }
        else if ( str[i] == '.' || str[i] == '!' || str[i] == '?' )
        {
            capitalizeNext = 1 ;             // a sentence ended, so the next letter starts a new one
        }
        else if ( str[i] != ' ' )
        {
            capitalizeNext = 0 ;             // a digit or symbol started the sentence, so no capital is needed
        }
    }

    printf("Sentence case: %s\n", str);

    return 0 ;
}