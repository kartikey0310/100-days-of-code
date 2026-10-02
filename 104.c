// Find the pivot integer x such that sum(1..x) equals sum(x..n).

#include <stdio.h>
int main() 
{
    int n , x , totalSum , leftSum = 0 , rightSum , pivot = -1 ;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    totalSum = n * (n + 1) / 2 ;   // sum of all integers from 1 to n

    for ( x = 1 ; x <= n ; x++ )
    {
        leftSum = leftSum + x ;                  // sum from 1 to x
        rightSum = totalSum - leftSum + x ;       // sum from x to n

        if ( leftSum == rightSum )
        {
            pivot = x ;
            break ;
        }
    }

    printf("%d\n", pivot);

    return 0 ;
}