#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,n;
    int sum=0,expectedsum,missing;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the number",n-1);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    expectedsum=n*(n+1)/2;
    missing=expectedsum-sum;
    printf("missing =%d",missing);
    return 0;
}
