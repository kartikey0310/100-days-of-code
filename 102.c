// Find the index of the ceil of x in a sorted array.

#include <stdio.h>
int main() 
{
    int n , x , i , beg , end , mid , ceilIndex = -1 ;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n] ;

    printf("Enter %d sorted elements: ", n);
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    beg = 0 ;
    end = n - 1 ;

    while ( beg <= end )
    {
        mid = (beg + end) / 2 ;

        if ( arr[mid] >= x )
        {
            ceilIndex = mid ;   
            end = mid - 1 ;
        }
        else
        {
            beg = mid + 1 ;     
        }
    }

    printf("%d\n", ceilIndex);

    return 0 ;
}