// Search for an element in an array using linear search.

#include <Stdio.h>
int main()
{
    int arr[5];
	int i,n;
	int f=0, index=-1;
	printf("Enter an element. ");
	
	for(i=0;i<5;i++)
	{
	 scanf("%d", &arr[i]);
	}
	printf("Enter an element to be searched  ");
	scanf("%d", &n);

	for(i=0;i<5;i++)
	{
		if(n == arr[i] )
		{
			index = i;
			f= 1;
			break;
		}
	}
		
		if(f == 1)
		 printf("Found at index %d", index);
	 else
		 printf("-1"); 
	
	return 0;
}