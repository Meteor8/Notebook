#include <iostream>

using namespace std;

int * fun1(void);
//int array1[10];
int * array1 = new int[10];

int * fun1(void)
{
    int i;
    int c;
    cout << "请输入数字个数：" << endl;
    cin >> i;
    for(c = 0; c < i; c++)
    {
        cout << "请输入第" << c + 1 << "个数字。" << endl;
        cin >> array1[c];
    }
    return & array1[0];
}

int main()
{
    int * pointer;
    int i, length  = 0;
    pointer = fun1();
    /*
    while((*(pointer+length) != 0 )&& (*(pointer+length) != '\n'))
    {
        length++;
    }
    */
    length = sizeof(array1)/sizeof(int);    //后面未输入的数字也会输出为0
    for(i = 0; i < length; i++)
    {
        cout << "第" << i+1 << "个数字是：" << *(pointer + i) << endl;
    }
    return 1;
}
