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
//地址传递
void printStudent2(const struct student* p)
{
    cout << "子函数2中 姓名：" << p->name << "年龄：" << p->age << "分数：" << p->score << endl;
}
//如果学生结构体或结构体成员列表有很多个类型，用值传递就会复制很多个学生结构体，会浪费空间
//但是使用地址传递就不会，因为一个指针只占用4个字节且4个字节包括了结构体里的所有学生及成员列表
//但是使用地址传递会修改实参，所以需要在形参前加入const，加入const后，一旦给形参赋值就会报错，可以防止误操作

int main()
{
    //将学生传到一个参数中，打印学生身上的所有信息
    //创建结构体变量
    student s = { "张三",18,60 };

    cout << "main函数中打印 姓名：" << s.name << "年龄：" << s.age << "分数：" << s.score << endl;

    printStudent2(&s);

    system("pause");
    return 0;
}