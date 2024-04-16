#include<iostream>
using namespace std;

int main()
{
    //输入考试分数，如果分数大于600，视为考上一本，在屏幕输出
    //如果没考上一本，打印未考上一本大学

    //输入考试分数
    int score=0;
    cout<<"请输入一个分数："<<endl;
    cin>>score;
    
    //提示用户输入的分数
    cout<<"你输入的分数为："<<score<<endl;

    //判断分数，如果大于600打印考上一本大学，否则打印为考上一本
    if(score>600)
    {
        cout<<"恭喜你考上一本大学"<<endl;
    }
    else
    {
        cout<<"很遗憾，你未考上一本"<<endl;
    }
    
    system("pause");
    return 0;
}