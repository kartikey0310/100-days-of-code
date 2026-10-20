// Find the missing number in an array containing integers from 0 to n, except one.

#include <stdio.h>
int main() 
{
    int n , i , expectedSum , actualSum = 0 ;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n] ;

    printf("Enter %d elements: ", n);
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d", &nums[i]);
    }

    expectedSum = n * (n + 1) / 2 ;   // sum of 0, 1, 2, ..., n

    for ( i = 0 ; i < n ; i++ )
    {
        actualSum = actualSum + nums[i] ;
    }

    printf("Missing number: %d\n", expectedSum - actualSum);

    return 0 ;
}