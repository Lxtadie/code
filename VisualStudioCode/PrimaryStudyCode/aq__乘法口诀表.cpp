#include<iostream>
using namespace std;

int main()
{
    //打印行数
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "*" << i << "=" << j * i << " ";
        }           
        cout <<endl;
    }
    system("pause");
    return 0;
}