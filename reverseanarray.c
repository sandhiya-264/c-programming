#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int n,left ;
    int right = n-1;
    while(left<right)
    {

        int c;
        c=a[left];
        a[left]=a[right];
        a[right]=c;
        left++;
        right--;
    }
    printf("%d",a[5]);
    return 0;
}
