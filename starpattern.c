#include <stdio.h>

void pattern()
{
    int i,j;
    for(i=0;i<5;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }



}
int main()
{
    pattern();
    return 0;
}

