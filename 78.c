// Q75: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>
int main() 
{
    int n , i , sum = 0 ;

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int mat[n][n] ;

    printf("Enter the elements of the matrix:\n");
    for ( i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for ( i = 0 ; i < n ; i++ )
    {
        sum = sum + mat[i][i] ;
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0 ;
}