#include<iostream>
using namespace std;

int main()
{
    //给电影进行打分

    //提示用户给电影打分
    cout<<"请给电影打分："<<endl;

    //用户开始进行打分
        int score=0;
        cin>>score;

    //根据用户输入的分数来提示用户最后的结果
    switch(score)
    {
    case 10:
        cout<<"你认为电影特别好"<<endl;
        break;
    case 9:
        cout<<"你认为电影特别好"<<endl;
        break;

    case 8:
        cout<<"你认为电影还不错"<<endl;
        break;
    case 7:
        cout<<"你认为电影还不错"<<endl;
        break;

    case 6:
        cout<<"你认为电影很一般"<<endl;
        break;
    case 5:
        cout<<"你认为电影很一般"<<endl;
        break;
    default:
        cout<<"你认为电影是烂片"<<endl;
        break;
    }
    system("pause");
    return 0;
}