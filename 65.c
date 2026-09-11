#include <stdio.h>

int main() 
{
    int arr[10];
    int i;

    printf("Enter elements\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    int n;
    printf("Enter element to search\n");
    scanf("%d", &n);

    int beg = 0, end = 9, mid, found = 0;   

    while (beg <= end) 
	{
        mid = (beg + end) / 2;

        if (n == arr[mid])
		{
            found = 1;
            break;
        }
        else if (n > arr[mid])
            beg = mid + 1;
        else
            end = mid - 1;
    }

    if (found == 1)
        printf("Found = %d\n", mid);
    else
        printf("Not Found\n");

    return 0;
}