#include "wood.h"

int q=3;    //Ϊʲô����ÿ�ε��ú������¸�ֵ���Ǻ�����ģ�飬���ú���������-_-
Wood wood1={&q,999};

void pContent(void)
{
    printf("��Ʒ��ľͷ���򲻣�(Y/N)\n");
    printf("���۸�:%d\t��棺%d��\n",wood1.price,*wood1.quantity);
}

void buy(char choiceXC)
{
    while(choiceXC !='Y' && choiceXC !='N')
    {
        printf("����˵ʲôABC���úûش�\n");
        scanf("%c",&choiceXC);
        fflush(stdin);
    }
    if (choiceXC=='N')  //choiceXC���βΰ�
    {
        printf("�ݰ������ϣ�\n");
    }
    else
    {
        if(*wood1.quantity<1)
        {
            printf("�Բ�����Ʒ�Ѿ���������Ⱥ򲹻���\n");
        }
        else
        {
            printf("��ϲ��������ɹ���(���-999)\n");
            *wood1.quantity=*wood1.quantity-1;
        }
    }
}
