// Q68: Delete an element from an array.

#include <stdio.h>
int main() 
{
    int n , i , j , position ;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n] ;

    printf("Enter the elements of the array: ");
    for ( i = 0 ; i < n ; i++ ){
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete: ");
    scanf("%d", &position);

    for ( j = position-1 ; j < n-1 ; j++ )
	{
        arr[j] = arr[j+1] ;
    }

    printf("The array after deletion is: ");
    for ( i = 0 ; i < n-1 ; i++ )
	{
        printf("%d ", arr[i]) ; 
    }

    return 0 ;
}