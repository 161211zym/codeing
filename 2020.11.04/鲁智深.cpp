#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = 1;
    }
    int i = 0;
    int a = 0, b = 0; //�ֱ��� �������� ������5
    while (a < 99)
    {
        if (arr[i] == 1) //ֻ��û�Թ���ͷ����
        {

            b++;            //����5
            if (b % 5 == 0) //���������ͷ
            {
                arr[i] = 0; //�԰���ͷ
                a++;        //����������һ
                b = 0;      //���������� ������
            }
        }
        i++; //��ѭ�����ų��Ѿ��Ե�����
        i = i % 100;
    }
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] == 1)
        {
            cout << i << endl;
        }
    }
    system("pause");
    return 0;
}