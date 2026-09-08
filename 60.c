// Count positive, negative, and zero elements in an array.

#include <Stdio.h>
int main()
{
     int i, pos=0, neg=0, zer=0;
	 int arr[10];
	 
	  printf("Enter 10 numbers: ");
		 for ( int i = 0 ; i < 10 ; i++ )
		 {
			 scanf("%d", &arr[i]);
		 }
		 
		 for ( int i = 0 ; i < 10 ; i++ )
		 {
		   if(arr[i] > 0 )
		    {
		     pos++;
			}
			 
			 else if (arr[i] < 0 )
			 {
			 neg++;
			 }
			 else
			 {
			 zer++;
			 }
			 }
			 
			 printf("Positive elements are: %d\n", pos);
		     printf("Negative elements are: %d\n", neg);
			 printf("Zero elements are: %d\n", zer);
			 
			 return(0);
}			 