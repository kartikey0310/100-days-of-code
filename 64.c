//  Merge two arrays without sorting it differently do it with 
//  extra varible k in loops only with while and if else  loops.


#include <stdio.h>
int main() 
{
    int n1 , n2 , i = 0 , j = 0 , k = 0 ;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    int arr1[n1] ;

    printf("Enter the elements of the first array: ");
    for ( i = 0 ; i < n1 ; i++ )
	{
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    int arr2[n2] ;

    printf("Enter the elements of the second array: ");
    for ( j = 0 ; j < n2 ; j++ )
	{
        scanf("%d", &arr2[j]);
    }

    int merged[n1 + n2] ;
    
    i = 0 ;
    j = 0 ;

    while ( i < n1 && j < n2 )
	{
        if ( arr1[i] < arr2[j] )
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

    while ( i < n1 )
	{
        merged[k] = arr1[i] ;
        i++ ;
        k++ ;
    }

    while ( j < n2 )
	{
        merged[k] = arr2[j] ;
        j++ ;
        k++ ;
    }

    printf("The merged array is: ");
    for ( k = 0 ; k < n1 + n2 ; k++ )
	{
        printf(" %d", merged[k]);
    }

    return 0;
}