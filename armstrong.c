#include <stdio.h>
#include <stdlib.h>
int armstrong(int num)
{
    int original,sum=0,rem;
    original=num;
    while(num != 0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(original==sum)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(armstrong(num))
        printf("it is armstrong number");
    else
        printf("not a armstrong");
    return 0;

}
