#include <stdio.h>

int main() 
{
    int arr[20];  
    int n, i, key, pos;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d sorted elements\n", n);
    for (i = 0; i < n; i++)
	{
        scanf("%d", &arr[i]);
	}

    printf("Enter element to insert\n");
    scanf("%d", &key);

    pos = n;
    for (i = 0; i < n; i++) 
	{
        if (arr[i] > key) 
		{
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = key;
    n++; 

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}