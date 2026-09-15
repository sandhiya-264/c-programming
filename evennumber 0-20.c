#include <stdio.h>
void even()
{
    int i;
    for(i=0;i<=20;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }

    }

}
int main()
{
    even();
    return 0;
}
