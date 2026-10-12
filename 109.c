// Write a program to take an integer array arr and an integer k as inputs. 
// Print the maximum sum of all the subarrays of size k.

#include <stdio.h>
int main() 
{
    int n , k , i , windowSum = 0 , maxSum ;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n] ;

    printf("Enter %d elements: ", n);
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if ( k > n || k <= 0 )
    {
        printf("-1\n");
        return 0 ;
    }

    // sum of the first window (first k elements)
    for ( i = 0 ; i < k ; i++ )
    {
        windowSum = windowSum + arr[i] ;
    }
    maxSum = windowSum ;

    // slide the window one step at a time
    for ( i = k ; i < n ; i++ )
    {
        windowSum = windowSum + arr[i] - arr[i - k] ;

        if ( windowSum > maxSum )
        {
            maxSum = windowSum ;
        }
    }

    printf("%d\n", maxSum);

    return 0 ;
}