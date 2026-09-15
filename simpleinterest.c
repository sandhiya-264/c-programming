#include <stdio.h>
#include <stdlib.h>
void simpleinterest(float p,float n,float r)
{
    float s;
    s=(p*n*r)/100;
    printf("simpleinterest=%.4f",s);
}
int main()
{
    float p,n,r;
    printf("principle");
    scanf("%f",&p);
    printf("years");
    scanf("%f",&n);
    printf("rate of interest");
    scanf("%f",&r);
    simpleinterest(p,n,r);
    return 0;
}
