// Count even and odd numbers present in an array.

#include <Stdio.h>
int main()
{
         int arr[10];
		 int even = 0 , odd = 0;
		 
		 printf("Enter 10 numbers: ");
		 for ( int i = 0 ; i < 10 ; i++ )
		 {
			 scanf("%d", &arr[i]);
		 }
		 
		 for ( int i = 0 ; i < 10 ; i++ )
		 {
         if ( arr[i] % 2 == 0 )
		    {
                even ++;
            }
           	else 
			{
                odd ++ ;
            }				
        }
		
		printf("Even numbers are: %d\n", even);
		printf("Odd numbers are: %d", odd);
		
	return 0;
}