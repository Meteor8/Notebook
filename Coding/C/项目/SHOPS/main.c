#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice;
    int i=0;
    do
    {
        pContent();
        scanf("%c",&choice);
        fflush(stdin);  //清空缓存区，防止跳过scanf,加空格也可以
        buy(choice);
        i++;
    }while(i<5);
    printf("小店打烊了！\n");

    return 0;
}
