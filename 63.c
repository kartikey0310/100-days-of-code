// Q62: Reverse an array without taking extra space and extra variable.

#include <stdio.h>
int main() 
{
    int n , i , j ;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n] ;

    printf("Enter the elements : ");
    for ( i = 0 ; i < n ; i++ )
	{
        scanf("%d", &arr[i]);
    }

    for ( i = 0 , j = n-1 ; i < j ; i++ , j-- )
	{
        arr[i] = arr[i] + arr[j] ;
        arr[j] = arr[i] - arr[j] ;
        arr[i] = arr[i] - arr[j] ;
    }

    printf("The reversed array is: ");
    for ( i = 0 ; i < n ; i++ )
	{
        printf(" %d", arr[i]);
    }

    return 0;
}