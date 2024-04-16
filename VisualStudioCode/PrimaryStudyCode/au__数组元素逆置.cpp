#include<iostream>
using namespace std;

int main()
{
    //创建数组
    int arr[5] = { 1,3,2,5,4 };
    cout << "数组元素逆置前："<< endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    //实现逆置
    int start = 0;  //起始下标
    int end = sizeof(arr) / sizeof(arr[0]) - 1;  //结束下标

    while (start < end)
    {

        //实现元素互换
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        //下标更新
        start++;
        end--;
    }

    //打印逆置后的数组
    cout << "数组元素逆置后：" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    system("pause");
    return 0;
}