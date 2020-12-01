#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//目标：1.运算等级（加减乘除，括号，定义变量level）
//疑问：1.运算符号为中文符号，输出乱码

int main()
{
    int i,error;  //算式有错误error为1，不输出答案,默认为0
    double num1,num2;
    char symbol=0;    //symbol'+'->43,'-'->45,'*'->42,'/'->47
    char formula[20];
    do
    {
        i=0;    //运算初始化
        num1=0.0;
        error=0;
        printf("请输入您要计算的表达式:");
        //strcpy(formula,"3*12");
        //scanf("%lf%s%lf",&num1,&symbol,&num2);
        scanf("%s",formula);
        do
        {
            num1=num1*10+(formula[i]-'0');
            i++;
        }while(formula[i]>='0'&&formula[i]<='9');
        do
        {
            num2=0; //num2初始化
            symbol=formula[i];
            i++;
            do
            {
                num2=num2*10+(formula[i]-'0');
                i++;
            }while(formula[i]>='0'&&formula[i]<='9');
            switch(symbol)
            {
                case '+':
                    num1=num1+num2;
                    break;
                case '-':
                    num1=num1-num2;
                    break;
                case '*':
                    num1=num1*num2;
                    break;
                case '/':
                    if(num2==0)
                    {
                        error=1;
                        printf("除数不能为；0！\n");
                    }
                    else
                    num1=num1/num2;
                    break;
                default:
                    printf("%c为无效的运算符(加:“+”,减:“-”,乘:“*”,除:“/”)\n",symbol);  //输出英文双引号要加转义字符->/"
                    error=1;
            }
        }while(formula[i]!='\0');
        if(error==0)
            printf("结果为:%lf\n",num1);
        else
            printf("请检查您的运算式：%s\n",formula);
    }while(1);

    return 0;
}
