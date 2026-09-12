// Insert an element in an array at a given position.

#include <stdio.h>
int main() 
{
    int arr[20];
    int n, i,ele, pos;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert\n");
    scanf("%d", &ele);

    printf("Enter position (1 to %d)\n", n + 1);
    scanf("%d", &pos);

    pos = pos - 1;

    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = ele;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}