// Maximum sum of a contiguous subarray (Kadane's algorithm).

#include <stdio.h>
int main() 
{
    int n , i , currentSum , maxSum ;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n] ;

    printf("Enter %d elements: ", n);
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d", &arr[i]);
    }

    currentSum = arr[0] ;
    maxSum = arr[0] ;

    for ( i = 1 ; i < n ; i++ )
    {
        if ( currentSum + arr[i] > arr[i] )
        {
            currentSum = currentSum + arr[i] ;   // extend the current subarray
        }
        else
        {
            currentSum = arr[i] ;                // start a new subarray here
        }

        if ( currentSum > maxSum )
        {
            maxSum = currentSum ;
        }
    }

    printf("%d\n", maxSum);

    return 0 ;
}