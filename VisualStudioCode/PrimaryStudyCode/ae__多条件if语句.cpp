#include<iostream>
using namespace std;

int main()
{
    //输入一个考试分数，如果大于600，视为考上一本大学，在屏幕输出
    //大于500，视为考上二本大学，在屏幕输出
    //大于400，视为考上三本大学，在屏幕输出
    //小于等于400，视为为考上本科，在屏幕输出

    //用户输入分数
    cout << "请输入你的分数：" << endl;
    int score = 0;
    cin >> score;

    //提示用户输入的分数
    cout << "你输入的分数为：" << score << endl;

    //判断分数是否符合要求
    if (score > 600)
    {
        cout << "恭喜你考上一本大学" << endl;
    }
    else if (score > 500)
    {
        cout << "恭喜你考上二本大学" << endl;
    }
    else if (score > 400)
    {
        cout << "恭喜你考上三本大学" << endl;
    }
    else
    {
        cout << "很遗憾，你为考上大学" << endl;
    }

    system("pause");
    return 0;
}