#include "Warehouse.h"

void printContent(void)
{
    printf("��ӭ���������̳ǣ���������������Ҫ�ģ����������ɣ�\n���������ǵ���ƷĿ¼��������ʲô��Ҫ�ģ�\n");
    printf("1.ľͷ\n2.ľͷ\n3.ľͷ\n4.ľͷ\n5.ľͷ\n(�ظ���Ʒ���Ž��й���)\n");
}

void askUser(int nums,struct goods wupin)
{
    printf("��ѡ����ǣ���Ʒ%d.ľͷ\n",nums);
    if (wupin.quantity<1)
    {
        printf("�Բ���Ŀǰ����Ʒ����������ȴ�����Ŷ��\n");
    }
    else
    {
        printf("�۸�:%d\t���:%d\n",wupin.price,wupin.quantity);
        printf("��ȷ��Ҫ������(Y/N)\n");
    }

}
