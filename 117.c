// Merge two sorted arrays into one sorted array.

#include <stdio.h>
int main() 
{
    int m , n , i = 0 , j = 0 , k = 0 ;

    printf("Enter the size of the first array: ");
    scanf("%d", &m);

    int arr1[m] ;

    printf("Enter %d sorted elements: ", m);
    for ( i = 0 ; i < m ; i++ )
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n);

    int arr2[n] ;

    printf("Enter %d sorted elements: ", n);
    for ( j = 0 ; j < n ; j++ )
    {
        scanf("%d", &arr2[j]);
    }

    int merged[m + n] ;

    i = 0 ;
    j = 0 ;
    k = 0 ;

    while ( i < m && j < n )
    {
        if ( arr1[i] <= arr2[j] )
        {
            merged[k] = arr1[i] ;
            i++ ;
        }
        else
        {
            merged[k] = arr2[j] ;
            j++ ;
        }
        k++ ;
    }

    while ( i < m )
    {
        merged[k] = arr1[i] ;
        i++ ;
        k++ ;
    }

    while ( j < n )
    {
        merged[k] = arr2[j] ;
        j++ ;
        k++ ;
    }

    printf("Merged array: ");
    for ( k = 0 ; k < m + n ; k++ )
    {
        printf("%d ", merged[k]);
    }
    printf("\n");

    return 0 ;
}