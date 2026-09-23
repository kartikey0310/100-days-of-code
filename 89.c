// Count frequency of a given character in a string.

#include <stdio.h>
#include<string.h>
int main() 
{
    char str[100] , target ;
    int i , count = 0 ;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Enter the character to count: ");
    scanf(" %c", &target);

    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( str[i] == target )
        {
            count++ ;
        }
    }

    printf("Frequency of '%c' = %d\n", target, count);

    return 0 ;
}