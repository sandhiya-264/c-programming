#include <stdio.h>
#include <stdlib.h>
int a[5]={1,2,3,4,5};

int main()
{
    int largest=a[0];
    int secondlargest=a[0];
    int thirdlargest=a[0];
    int i;
    for(i=1;i<4;i++)
    {
        if(a[i]>largest)
        {
            secondlargest=largest;
            thirdlargest=secondlargest;
            largest=a[i];
        }
        else if(a[i]>secondlargest & a[i<largest])
        {
            thirdlargest=secondlargest;
            secondlargest=a[i];
        }
        else if(a[i]>thirdlargest & a[i]<secondlargest)
        {
            thirdlargest=a[i];
        }
    }
    printf("third number%d",thirdlargest);
    return 0;
}
