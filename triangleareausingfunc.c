#include<stdio.h>
void areatriangle(float b,float h)
{
    float a;
    a=0.5*b*h;
    printf("area=%.4f",a);
}
int main()
{
    float h,b;
    printf("base");
    scanf("%f",&b);
    printf("height");
    scanf("%f",&h);
    areatriangle(b,h);
    return 0;
}
