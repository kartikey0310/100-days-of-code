// Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100] , str2[100] , combined[200] ;
    int len1 , len2 ;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    len1 = strlen(str1) ;
    len2 = strlen(str2) ;

    if ( len1 != len2 )
    {
        printf("Not a rotation.\n");
        return 0 ;
    }

    strcpy(combined, str1) ;
    strcat(combined, str1) ;

    if ( strstr(combined, str2) != NULL )
    {
        printf("The second string is a rotation of the first.\n");
    }
    else
    {
        printf("Not a rotation.\n");
    }

    return 0 ;
}