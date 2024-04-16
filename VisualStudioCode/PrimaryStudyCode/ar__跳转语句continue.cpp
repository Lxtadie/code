#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)   //如果是奇数就输出，偶数不输出
        {
            continue;     //可以筛选条件，执行到此就不再向下执行，执行下一次循环
        }
        cout << i << endl;
    }
    system("pause");
    return 0;
}