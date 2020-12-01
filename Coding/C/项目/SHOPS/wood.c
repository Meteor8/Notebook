#include "wood.h"

int q=3;    //为什么不是每次调用函数重新赋值？非函数是模块，调用函数在下面-_-
Wood wood1={&q,999};

void pContent(void)
{
    printf("商品：木头，买不？(Y/N)\n");
    printf("【价格:%d\t库存：%d】\n",wood1.price,*wood1.quantity);
}

void buy(char choiceXC)
{
    while(choiceXC !='Y' && choiceXC !='N')
    {
        printf("你在说什么ABC？好好回答！\n");
        scanf("%c",&choiceXC);
        fflush(stdin);
    }
    if (choiceXC=='N')  //choiceXC是形参啊
    {
        printf("拜拜了您嘞！\n");
    }
    else
    {
        if(*wood1.quantity<1)
        {
            printf("对不起，商品已经售罄，请等候补货！\n");
        }
        else
        {
            printf("恭喜您，购买成功！(金币-999)\n");
            *wood1.quantity=*wood1.quantity-1;
        }
    }
}
