#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100], n, i;
    int sorted = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            sorted = 0;
            break;
        }
    }

    if(sorted == 1)
    {
        printf("Array is sorted in ascending order.");
    }
    else
    {
        printf("Array is not sorted.");
    }

    return 0;
}
