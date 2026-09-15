#include <stdio.h>
#include <stdlib.h>
void sub( )
{
    int a,b;
    printf("enter the number");
    scanf("%d %d",&a,&b);

    printf("sub=%d",a-b);
}
int main()
{
    sub();
    return 0;
}
