// Q85: Reverse a string.

#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);
    char reversed[100];

    for (int i = 0; i < length; i++) 
	{
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0'; 

    printf("Reversed string: %s\n", reversed);
    return 0;
}