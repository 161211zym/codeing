#include <iostream>
using namespace std;
struct student //创建结构体
{
    int xuehao;
    float S[5];
    float avg;
} stu[4];
void average(student stu[4])
{
    int i, j;
    float sum = 0;
    for (i = 0; i < 4; i++)
    {
        sum = 0;
        for (j = 0; j < 5; j++)
        {
            sum += stu[i].S[j];
        }
        stu[i].avg = sum / 5;
        cout << "第" << i + 1 << "个学生平均成绩为：" << stu[i].avg << endl;
    }
}
void put1(student stu[4])
{
    for (int i = 0; i < 4; i++)
    {
        int num = 0;
        for (int j = 0; j < 5; j++)
        {
            if (stu[i].S[j] < 60)
            {
                num++;
            }
        }
        if (num > 2)
        {
            cout << stu[i].xuehao
                 << stu[i].S[0] << stu[i].S[1] << stu[i].S[2] << stu[i].S[3] << stu[i].S[4]
                 << stu[i].avg << endl;
        }
    }
}

void put2(student stu[4])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        if (stu[i].avg > 90)
        {
            cout << stu[i].xuehao
                 << stu[i].S[0] << stu[i].S[1] << stu[i].S[2] << stu[i].S[3] << stu[i].S[4]
                 << stu[i].avg << endl;
        }
        int num = 0;
        for (j = 0; j < 5; j++)
        {

            if (stu[i].S[j] > 85)
            {
                num++;
            }
        }
        if (num == 5)
        {
            cout << stu[i].xuehao
                 << stu[i].S[0] << stu[i].S[1] << stu[i].S[2] << stu[i].S[3] << stu[i].S[4]
                 << stu[i].avg << endl;
        }
    }
}
int main()
{

    for (int i = 0; i < 4; i++)
    {
        cout << "第 " << i + 1 << "个学生的状况 ： " << endl;
        cin >> stu[i].xuehao >> stu[i].S[0] >> stu[i].S[1] >> stu[i].S[2] >> stu[i].S[3] >> stu[i].S[4];
    }

    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += stu[i].S[0];
    }
    float avg1 = sum / 4.0;
    cout << "第一门科目的平均成绩为 ： " << avg1 << endl;
    average(stu);
    put1(stu);
    put2(stu);
    system("pause");
    return 0;
}