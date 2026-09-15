#include <stdio.h>
#include <stdlib.h>
int palindrome(int num)
{
    int original,reverse=0,rem;
    original=num;
    while(num != 0)
    {
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    if(original==reverse)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(palindrome(num))
        printf("it is palindrome");
    else
        printf("not a palindrome");
    return 0;

}
