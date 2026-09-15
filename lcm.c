#include <stdio.h>
#include <stdlib.h>
int lcm(int a,int b)
{
    int i,max;
    max=(a>b)?a:b;
    for(i=max; ;i++)
    {
        if(i%a==0&&i%b==0)
        {
            return i;
        }

    }
}


int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("lcm=%d",lcm(a,b));
    return 0;
}
