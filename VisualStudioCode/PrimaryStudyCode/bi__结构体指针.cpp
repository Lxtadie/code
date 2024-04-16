#include<iostream>
using namespace std;

struct student
{
    string name;
    int eag;
    int score;
};

int main()
{
    student s = { "张三",18,90 };

    //通过指针指向结构体变量
    student* p = &s;

    //通过指针访问结构体变量中的数据
    //通过结构体指针访问结构体中的属性，需要用到 -> 操作符
    cout << "姓名：" << p->name << "年龄：" << p->eag << "分数：" << p->score << endl;

    system("pause");
    return 0;
}