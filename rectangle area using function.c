#include <stdio.h>
#include <stdlib.h>
void arearec(float l,float b)
{
    float a;
    a=l*b;
    printf("area=%.4f",a);
}
int main()
{
    float l,b;
    printf("length");
    scanf("%f",&l);
    printf("breadth");
    scanf("%f",&b);
    arearec(l,b);
    return 0;
}
