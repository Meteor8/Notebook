#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Ŀ�꣺1.����ȼ����Ӽ��˳������ţ��������level��
//���ʣ�1.�������Ϊ���ķ��ţ��������

int main()
{
    int i,error;  //��ʽ�д���errorΪ1���������,Ĭ��Ϊ0
    double num1,num2;
    char symbol=0;    //symbol'+'->43,'-'->45,'*'->42,'/'->47
    char formula[20];
    do
    {
        i=0;    //�����ʼ��
        num1=0.0;
        error=0;
        printf("��������Ҫ����ı��ʽ:");
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
            num2=0; //num2��ʼ��
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
                        printf("��������Ϊ��0��\n");
                    }
                    else
                    num1=num1/num2;
                    break;
                default:
                    printf("%cΪ��Ч�������(��:��+��,��:��-��,��:��*��,��:��/��)\n",symbol);  //���Ӣ��˫����Ҫ��ת���ַ�->/"
                    error=1;
            }
        }while(formula[i]!='\0');
        if(error==0)
            printf("���Ϊ:%lf\n",num1);
        else
            printf("������������ʽ��%s\n",formula);
    }while(1);

    return 0;
}
