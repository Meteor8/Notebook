#include <iostream>

using namespace std;

int * fun1(void);
//int array1[10];
int * array1 = new int[10];

int * fun1(void)
{
    int i;
    int c;
    cout << "���������ָ�����" << endl;
    cin >> i;
    for(c = 0; c < i; c++)
    {
        cout << "�������" << c + 1 << "�����֡�" << endl;
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
    length = sizeof(array1)/sizeof(int);    //����δ���������Ҳ�����Ϊ0
    for(i = 0; i < length; i++)
    {
        cout << "��" << i+1 << "�������ǣ�" << *(pointer + i) << endl;
    }
    return 1;
}
