//猴子吃桃
//猴子第一天摘了若干个桃子，吃了一半，不过瘾，又多吃了1个。第二天早上将剩余的桃子又吃掉一半，并且又多吃了1个。此后每天都是吃掉前一天剩下的一半零一个。到第n天再想吃时，发现只剩下1个桃子，问第一天它摘了多少桃子？
#include <iostream>
using namespace std;
int main()
{
    int n;
    int tao = 1;
    cout << "天数为 ： " << endl;
    cin >> n;
    for (int i = 0; i < n-1; i++)
    {
        tao = (tao + 1) * 2;
            if (i = n -2)
        {
            cout << tao << endl;
        }
    }
    
}