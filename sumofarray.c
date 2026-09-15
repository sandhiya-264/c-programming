#include <stdio.h>
#include <stdlib.h>77
int a[5]={9,2,5,4,6};

int main()
{
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
    return 0;
}
