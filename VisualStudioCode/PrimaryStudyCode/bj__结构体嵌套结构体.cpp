#include<iostream>
using namespace std;

//定义学生结构体
struct student
{
    //学生姓名
    string name;
    //学生年龄
    int age;
    //学生分数
    int score;
};

//定义老师结构体
struct teacher
{
    //教师编号
    int id;
    //教师姓名
    string name;
    //教师年龄
    int age;
    //辅导的学生
    struct student stu;
};

int main()
{
    //创建老师并赋值
    teacher t;
    t.id = 814321;
    t.name = "张三";
    t.age = 33;

    t.stu.name = "小王";
    t.stu.age = 18;
    t.stu.score = 100;

    cout << "老师姓名：" << t.name << "老师编号：" << t.id << "老师年龄：" << t.age << endl;
    cout << "老师辅导的学生姓名：" << t.stu.name << "学生年龄：" << t.stu.age << "学生分数：" << t.stu.score << endl;

    system("pause");
    return 0;
}