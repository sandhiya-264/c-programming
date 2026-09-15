#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b)
{
    int i,gcd;
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
int main()
{
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    gcd(a,b);
    printf("gcd=%d",gcd(a,b));
    return 0;
}
