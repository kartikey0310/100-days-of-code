//  Find the sum of each row of a matrix and store it in an array.

#include<stdio.h>
int main()
{
	int i, j, s=0, rows, cols;
	
	printf("Enter the number of rows. ");
	scanf("%d", &rows);
	
	printf("Enter the number of Columns . ");
	scanf("%d", &cols);
	int arr[rows][cols];
	int rowsum[rows];
	
	printf("Enter the elements of the matrix. ");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		s=0;
		for(j=0;j<cols;j++)
		{
			s+=arr[i][j];
		}
		
		printf("Sum of %d rows is %d\n", (i+1) ,s);
	}
}