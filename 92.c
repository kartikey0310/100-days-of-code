// Find the first repeating lowercase alphabet in a string.

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i ,j =0, found= 0;
	
	printf("Enter a string");
	scanf("%[^\n]", str);
	
	for(i=0; str[i]!='\0'; i++)
	{ 
	   if ( str[i] >= 'a' && str[i] <= 'z' )
        {
          for ( j = i + 1 ; str[j] != '\0' ; j++ )
            {
                if ( str[j] == str[i] )
                {
                    printf("First repeating lowercase alphabet is: %c\n", str[i]);
                    found = 1 ;
                    break ;
                }
            }
        }
		if(found==1)
		{
		   break;
		}
	}
	return 0;
}