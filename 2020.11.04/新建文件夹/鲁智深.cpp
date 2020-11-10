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
    int a = 0, b = 0; //分别是 出局人数 计数器5
    while (a < 99)
    {
        if (arr[i] == 1) //只数没吃过馒头的人
        {

            b++;            //数数5
            if (b % 5 == 0) //第五个吃馒头
            {
                arr[i] = 0; //吃啊馒头
                a++;        //出局人数加一
                b = 0;      //计数器置零 重新数
            }
        }
        i++; //做循环且排除已经吃到的人
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