#include<iostream>
using namespace std;

//定义一个结构体
struct Student
{
    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
};

int main()
{
    //创建结构体数组
    Student stuArray[3] =
    {
        {"张三",18,100},
        {"李四",17,80},
        {"王五",16,70}
    };

    //给结构体数组中的元素赋值
    stuArray[2].name = "赵六";
    stuArray[2].age = 22;
    stuArray[2].score = 60;

    //遍历结构体数组
    for (int i = 0; i < 3; i++)
    {
        cout << "姓名：" << stuArray[i].name << "年龄：" << stuArray[i].age << "分数：" << stuArray[i].score << endl;
    }

    system("pause");
    return 0;
}