#include<iostream>
using namespace std;

int main()
{
    //二维数组的4种定义方式

    //1，数据类型 数组名[行数][列数];
    int arr1[2][3];

    arr1[0][0] = 10;
    arr1[0][1] = 20;
    arr1[0][2] = 30;
    arr1[1][0] = 40;
    arr1[1][1] = 50;
    arr1[1][2] = 60;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << endl;
        }
    }

    //2，数据类型 数组名[行数][列数]={数据1,数据2,数据n},{数据3,数据4,数据n};
    int arr2[2][3] =
    {
        {10,20,30},
        {40,50,60}
    };

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << endl;
        }
    }




    //3，数据类型 数组名[行数][列数]={数据1,数据2,数据n};
    int arr3[2][3] = { 10,20,30,40,50,60 };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << endl;
        }
    }




    //4，数据类型 数组名[][列数]={数据1,数据2,数据n};
    int arr4[][3] = { 10,20,30,40,50,60 };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr4[i][j] << endl;
        }
    }

    system("pause");
    return 0;
}