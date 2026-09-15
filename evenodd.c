#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100],even[100],odd[100];
    int n,i;
    int e=0,o=0;
    printf("Enter the number of element");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even[e]=a[i];
            e++;
        }
        else
        {
            odd[o]=a[i];
            o++;
        }
    }
     printf("\nEven numbers:\n");
    for(i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\n\nOdd numbers:\n");
    for(i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}


