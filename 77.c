// Q74: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
int main() 
{
    int n , i , j , distinct = 1 ;

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int mat[n][n] ;

    printf("Enter the elements of the matrix:\n");
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j < n ; j++ )
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = i + 1 ; j < n ; j++ )
        {
            if ( mat[i][i] == mat[j][j] )
            {
                distinct = 0 ;
            }
        }
    }

    if ( distinct == 1 )
        printf("The diagonal elements are distinct.\n");
    else
        printf("The diagonal elements are not distinct.\n");

    return 0 ;
}