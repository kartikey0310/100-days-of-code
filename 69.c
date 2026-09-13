// Q69: Find the second largest element in an array.

#include<stdio.h>
int main() 
{
    int n , i , largest , second_largest ;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n] ;

    printf("Enter the elements: ");
    for ( i = 0 ; i < n ; i++ )
	{
        scanf("%d", &arr[i]);
    }

    largest = second_largest = arr[0];

    for ( i = 1 ; i < n ; i++ )
	{
        if ( arr[i] > largest )
		{
            second_largest = largest ;
            largest = arr[i] ;
        }
        else if ( arr[i] > second_largest && arr[i] != largest )
		{
            second_largest = arr[i] ;
        }
    }

    printf("The second largest element in the array is: %d\n", second_largest) ;

    return 0 ;
}