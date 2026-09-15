#include <stdio.h>
void odd()
{
    int i;
    for(i=0;i<=20;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }

    }

}
int main()
{
    odd();
    return 0;
}
