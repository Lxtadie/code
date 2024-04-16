#include<iostream>
using namespace std;

int main()
{
    //一维数组的3种定义方式

    //1，数据类型 数组名[数组长度]；
    int arr1[5];
    arr1[0] = 1;
    arr1[1] = 3;
    arr1[2] = 5;
    arr1[3] = 7;
    arr1[4] = 9;

    cout << arr1[0] << endl;
    cout << arr1[1] << endl;
    cout << arr1[2] << endl;
    cout << arr1[3] << endl;
    cout << arr1[4] << endl;

    //2，数据类型 数组名[数组长度]={值1,值2,值3,值n……};
    int arr2[5] = { 2,4,6,8,10 };  //创建数组

    for (int i = 0; i < 5; i++)   //利用for循环输出数组里的元素
    {
        cout << arr2[i] << endl;;
    }

    //3，数据类型 数组名[]={值1,值2,值3,值n……};
    int arr3[5] = { 7,6,4,9,2 };  //创建数组

    for (int i = 0; i < 5; i++)   //利用for循环输出数组里的元素
    {
        cout << arr3[i] << endl;;
    }

    system("pause");
    return 0;
}