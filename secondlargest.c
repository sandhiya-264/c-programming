#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={10,20,30,40,50};
    int largest=a[0];
    int secondlargest=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>largest)
        {
           secondlargest=largest;
           largest=a[i];
        }
        else(a[i]<largest)
        {
             largest=largest;
             secondlargest=a[i];
        }
        printf("%d",secondlargest);

    return 0;
}
