#include<iostream>
using namespace std;
#include<string>

int main()
{

    //创建二维数组
    int score[3][3] =
    {
        {100,100,100},
        {90,50,70},
        {50,99,49}
    };

    string names[3] = { "张三","李四","王五" };

    //统计每个人的总分
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;  //统计分数总和的变量
        for (int j = 0; j < 3; j++)
        {
            sum += score[i][j];
            /*  cout << score[i][j] << " ";*/
        }
        cout << names[i] << "的总分为： " << sum << endl;
    }
    system("pause");
    return 0;
}