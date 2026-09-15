#include <stdio.h>

void displaysize()
{
    printf("size for char=%zu\n",sizeof(char));
    printf("size for int=%zu\n",sizeof(int));
    printf("size for float=%zu\n",sizeof(float));
    printf("size for double=%zu\n",sizeof(double));

}
int main()
{
    displaysize();
    return 0;
}
