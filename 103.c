// Find the pivot index of an array.

#include <stdio.h>
int main() 
{
    int n , i , totalSum = 0 , leftSum = 0 , pivotIndex = -1 ;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n] ;

    printf("Enter %d elements: ", n);
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d", &arr[i]);
    }

    for ( i = 0 ; i < n ; i++ )
    {
        totalSum = totalSum + arr[i] ;
    }

    for ( i = 0 ; i < n ; i++ )
    {
        int rightSum = totalSum - leftSum - arr[i] ;

        if ( leftSum == rightSum )
        {
            pivotIndex = i ;
            break ;
        }

        leftSum = leftSum + arr[i] ;
    }

    printf("%d\n", pivotIndex);

    return 0 ;
}