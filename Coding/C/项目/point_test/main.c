#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int a[2] = {23,52};
    for(i=0;i<2;i++)
    {
        printf("%d\t",*(a+i));
    }
}
