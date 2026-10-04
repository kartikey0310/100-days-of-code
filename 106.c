// Find the next greater element for each element of the array.

#include <stdio.h>
int main() 
{
    int n , i , j ;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n] , nge[n] ;

    printf("Enter %d elements: ", n);
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d", &arr[i]);
    }

    for ( i = 0 ; i < n ; i++ )
    {
        nge[i] = -1 ;   // assume no greater element exists, until found

        for ( j = i + 1 ; j < n ; j++ )
        {
            if ( arr[j] > arr[i] )
            {
                nge[i] = arr[j] ;
                break ;
            }
        }
    }

    printf("Next greater elements:\n");
    for ( i = 0 ; i < n ; i++ )
    {
        printf("%d ", nge[i]);
    }
    printf("\n");

    return 0 ;
}