#include<iostream>
using namespace std;

//实现两个数字进行交换
void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "swap01 a=" << a << endl;
    cout << "swap01 b=" << b << endl;
}

void swap02( int* p1, int* p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "swap02 a=" << *p1 << endl;
    cout << "swap02 b=" << *p2<< endl;
}

int main()
{
    int a = 10;
    int b = 20;
    cout << "实际参数a=" << a << endl;
    cout << "实际参数b=" << b << endl;

    //值传递
    //如果是值传递，不可以修饰实际参数
    swap01(a, b);
    cout << "值传递a=" << a << endl;
    cout << "值传递b=" << b << endl;

    //地址传递
    //如果是地址传递，可以修饰实际参数
    swap02(&a, &b);
    cout << "地址传递a=" << a << endl;
    cout << "地址传递b=" << b << endl;

    system("pause");
    return 0;
}