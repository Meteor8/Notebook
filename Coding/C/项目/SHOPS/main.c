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
        fflush(stdin);  //��ջ���������ֹ����scanf,�ӿո�Ҳ����
        buy(choice);
        i++;
    }while(i<5);
    printf("С������ˣ�\n");

    return 0;
}
