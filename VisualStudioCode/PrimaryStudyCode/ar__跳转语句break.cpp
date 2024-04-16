#include<iostream>
using namespace std;

int main()
{
    //break的使用时机

    //出现在switch语句中
    cout << "请选择副本难度" << endl;
    cout << "1，普通" << endl;
    cout << "2, 中等" << endl;
    cout << "3, 困难" << endl;

    int select = 0;  //创建选择结果变量
    cin >> select;   //等待用户输入

    switch (select)
    {
    case 1:
        cout << "你选择的是普通难度" << endl;
        break;
    case 2:
        cout << "你选择的是中等难度" << endl;
        break;
    case 3:
        cout << "你选择的是困难难度" << endl;
    default:
        break;
    }




    //出现在循环语句中
    for(int i=0;i<10;i++)
    {
        if(i==5)   //如果i=5就退出循环，不再打印
        {
            break;
        }
        cout<<i<<endl;
    }




    //出现在嵌套循环语句中
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(j==5)  //如果j==5就退出内层循环循环
            {
                break;
            }
            cout<<"*";
        }
        cout<<endl;
    }

    system("pause");
    return 0;
}