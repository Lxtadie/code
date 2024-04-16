#include<iostream>
using namespace std;

//创建学生数据类型
struct Student  //创建结构体变量时struct可以不写，创建学生数据类型时必须要写
{
    //成员列表

    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
}s3;

int main()
{
    //结构体变量创建的三种方式
    //方式1  struct 结构体名 变量名
    Student s1;  //struct可以不写
    s1.name = "张三";  //给s1属性赋值时需要通过.访问结构体变量中的属性
    s1.age = 18;
    s1.score = 100;
    cout << "姓名：" << s1.name  << "年龄：" << s1.age  << "分数：" << s1.score  << endl;

    //方式2  struct 结构体名 变量名={成员值1，成员值2……}
    struct Student s2 = { "李四",19,60 };
    cout << "姓名：" << s2.name << "年龄：" << s2.age << "分数：" << s2.score << endl;

    //方式3  定义结构体时顺便创建变量
    s3.name = "王五";
    s3.age = 17;
    s3.score = 80;
    cout << "姓名：" << s3.name << "年龄：" << s3.age << "分数：" << s3.score << endl;

    system("pause");
    return 0;
}