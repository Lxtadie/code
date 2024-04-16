#include<iostream>
using namespace std;
//定义学生结构体
struct student
{
    string name;
    int age;
    int score;
};

//打印学生信息函数
//值传递
void printStudent1(struct student s)
{
    cout << "子函数中 姓名：" << s.name << "年龄：" << s.age << "分数：" << s.score << endl;
}

//地址传递
void printStudent2(struct student* p)
{
    cout << "子函数2中 姓名：" <<p->name << "年龄：" << p->age << "分数：" <<p->score << endl;
}

int main()
{
    //结构体做函数参数
    //将学生传到一个参数中，打印学生身上的所有信息
    //创建结构体变量
    student s;
    s.name = "张三";
    s.age = 18;
    s.score = 60;

    cout << "main函数中打印 姓名：" << s.name << "年龄：" << s.age << "分数：" << s.score << endl;

    printStudent1(s);

    printStudent2(&s);

    system("pause");
    return 0;
}