// First negative integer in every subarray of size k.

#include <stdio.h>
int main() 
{
    int n , k , i , j , found ;

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

    for ( i = 0 ; i <= n - k ; i++ )
    {
        found = 0 ;

        for ( j = i ; j < i + k ; j++ )
        {
            if ( arr[j] < 0 )
            {
                printf("%d ", arr[j]);
                found = 1 ;
                break ;
            }
        }

        if ( found == 0 )
        {
            printf("0 ");
        }
    }
    printf("\n");

    return 0 ;
}