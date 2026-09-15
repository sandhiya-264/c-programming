#include <stdio.h>

void ascii()
{
    char ch;
    for(ch='A';ch<='Z';ch++)
        {
            printf("%c=%d\n",ch,ch);
        }


}
int main()
{
    ascii();
    return 0;
}
