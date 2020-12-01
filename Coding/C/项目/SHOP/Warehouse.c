#include "Warehouse.h"

void printContent(void)
{
    printf("欢迎来到王者商城，这里有所有你想要的，快来看看吧！\n下面是我们的商品目录，看看有什么需要的：\n");
    printf("1.木头\n2.木头\n3.木头\n4.木头\n5.木头\n(回复商品代号进行购买)\n");
}

void askUser(int nums,struct goods wupin)
{
    printf("您选择的是：商品%d.木头\n",nums);
    if (wupin.quantity<1)
    {
        printf("对不起，目前该商品已售罄，请等待补货哦！\n");
    }
    else
    {
        printf("价格:%d\t库存:%d\n",wupin.price,wupin.quantity);
        printf("您确定要购买吗？(Y/N)\n");
    }

}
