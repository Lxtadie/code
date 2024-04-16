#include<iostream>
using namespace std;

//冒泡排序函数
void bubbleSort(int*arr,int len)  //参数1为数组首地址  参数2为数组长度
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            //如果j>j+1的值就交换数字
            if (arr[j] >arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }
    }
}
//打印数组
void printArray(int* arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;;
    }
}

int main()
{
    //创建数组
    int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

    //利用sizeof算出数组长度
    int len = sizeof(arr) / sizeof(arr[0]);

    //创建函数，实现冒泡排序
    bubbleSort(arr,len);

    //打印排序后的数组
    printArray(arr, len);

    system("pause");
    return 0;
}