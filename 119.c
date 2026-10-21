// Find the only repeated element in an array, in one single iteration.

#include <stdio.h>
int main() 
{
    int n , i ;
    int seen[1001] = {0} ;   // seen[x] becomes 1 once the value x has appeared

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n] ;

    printf("Enter %d elements: ", n);
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d", &nums[i]);
    }

    for ( i = 0 ; i < n ; i++ )
    {
        if ( seen[nums[i]] == 1 )
        {
            printf("Repeated element: %d\n", nums[i]);
            break ;
        }

        seen[nums[i]] = 1 ;
    }

    return 0 ;
}