#include<iostream>
using namespace std;

int main()
{
    //整型：short  int  long  long long
    //可以利用sizeof求出数据类型所占用的内存空间大小
    //语法：sizeof（数据类型/变量）  /=或

    short num1 = 10;
    cout << "shor占用内存空间为：" << sizeof(short) << endl;

    long num3 = 10;
    cout << "long占用内存空间为：" << sizeof(long) << endl;

    long long num4 = 10;
    cout << "long long占用内存空间为：" << sizeof(num4) << endl;

    system("pause");
    return 0;
}