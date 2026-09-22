// Count spaces, digits, and special characters in a string.

#include<stdio.h>
#include <string.h>
int main()
{
	char str[50];
	int i, spaces=0, special=0, digits=0;
	
	printf("Enter a string. ");
	scanf("%[^\n]", str);
	
	for(i=0; str[i]!='\0';i++)
	{
		char ch=str[i];
		
		 if ( ch == ' ' )
        {
            spaces++ ;
        }
        else if ( ch >= '0' && ch <= '9' )
        {
            digits++ ;
        }
		 else if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
        {
            // letter — not counted
        }
        else
        {
            special++ ;
        }
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);

    return 0 ;
}