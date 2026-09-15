#include <stdio.h>
#include <stdlib.h>
void area()
{
    float r,a;
    printf("radius");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("area =%.4f",a);
}
int main()
{
    area();
    return 0;
}
