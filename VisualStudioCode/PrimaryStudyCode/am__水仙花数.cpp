#include<iostream>
using namespace std;

int main()
{
    //打印所有三位数字
    int num = 100;

    do
    {
        //从所有三位数字中找到水仙花数
        int a = 0;  //个位
        int b = 0;  //十位
        int c = 0;  //百位

        a = num % 10;       //获取数字的个位
        b = num / 10 % 10;  //获取数字的十位
        c = num / 100;      //获取数字的百位

        if (a * a * a + b * b * b + c * c * c == num)  //如果是水仙花数才打印
        {
            cout << num << endl;
        }

      num++;
    } while (num < 1000);

    system("pause");
    return 0;
}