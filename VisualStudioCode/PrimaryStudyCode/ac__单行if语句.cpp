#include<iostream>
using namespace std;

int main()
{
    //用户输入分数，如果分数大于600，视为考上一本大学，在屏幕上输出

    //用户输入分数
    int score=0;
    cout<<"请输入一个分数："<<endl;
    cin>>score;

    //打印用户输入的分数
    cout<<"你输入的分数为 ："<<score<<endl;

    //判断分数是否大于600，如果大于那么输出
    if(score>600)
    {
        cout<<"恭喜你考上一本大学"<<endl;
    }

    system("pause");
    return 0;
}       `