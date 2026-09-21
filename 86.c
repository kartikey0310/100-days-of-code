// Q86: Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>
int main()
 {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);
    int isPalindrome = 1; 

    for (int i = 0; i < length / 2; i++)
	{
        if (str[i] != str[length - 1 - i]) 
		{
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome)
	{
        printf("Palindrome\n");
    } else 
	{
        printf("Not palindrome\n");
    }

    return 0;
}