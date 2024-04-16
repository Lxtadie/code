#include<iostream>
using namespace std;

/*
定义函数的五个步骤

1，返回值类型
2，函数名
3，参数列表
4，函数体语句
5，return 表达式

*/

//定义一个加法函数，实现两个整型相加，并将返回的结果进行相加
int add(int num1,int num2)
{
    int sum=num1+num2;  
    return sum;
}
//函数定义的时候，num1和num2并没有真实数据
//它只是一个形式上的参数，简称形参
//当函数调用的时候，实际参数的值会传递给形式参数

int main()
{
    //在main函数中调用加法函数
    int a=10;    //a和b称为实际参数，简称实参
    int b=20;    //a和b称为实际参数，简称实参

    //函数调用的语法:函数名(参数)
    int c=add(a,b);
    cout<<"c="<<c<<endl;

    system("pause");
    return 0;
}