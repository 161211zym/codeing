#include <iostream>
using namespace std;
struct num
{
	int z;
	int m;
};
int main()
{
	num a;
	num b;
	cout << "��ֱ����������ķ��ӷ�ĸ�� " << endl;
	cin >> a.z >> a.m;
	cin >> b.z >> b.m;
	//�ҷ�ĸ��С������
	int x= a.m < b.m ? a.m : b.m;
	int y;
	for (;x > 0;x++)
	{
		if  (x % a.m ==0 && x % b.m ==0  )
		{
			y = x / a.m * a.z + x / b.m * b.z;
            break;
        }

	}
	cout << y << "/" << x << endl;

	return 0;
}