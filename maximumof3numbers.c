#include <stdio.h>
#include <stdlib.h>
int max(int a,int b,int c)
{
    int max;
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    return max;
}
int main()
{
    int a,b,c;
    printf("enter");
    scanf("%d %d %d",&a,&b,&c);
    printf("maximum=%d",max(a,b,c));
    return 0;
}
