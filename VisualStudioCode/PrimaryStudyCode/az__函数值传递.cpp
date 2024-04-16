#include<iostream>
using namespace std;

//定义函数，实现两个数字进行交换的函数

void swap(int num1, int num2)
{
    cout << "交换前：" << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "交换后：" << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;

    //return  返回值不需要的时候可以不写return;
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    //当我们做值传递的时候，函数的形参发生改变，并不会影响实参

    system("pause");
    return 0;
}