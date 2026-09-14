// Q71: Read and print a matrix.

#include <stdio.h>
int main() 
{
    int rows, col, i, j;

    printf("Enter the number of rows and columns in the matrix: ");
    scanf("%d %d", &rows, &col);

    int matrix[rows][col];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < col; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < col; j++)
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}