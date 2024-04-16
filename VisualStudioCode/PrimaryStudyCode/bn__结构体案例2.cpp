#include<iostream>
using namespace std;

//设计英雄结构体
struct Hero
{
    string name;
    int age;
    string sex;
};

//冒泡排序 实现年龄升序排序
void bubbleSort(struct Hero heroArray[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            //如果j下标的元素年龄>j+1下标的元素的年龄，交换两个元素
            if (heroArray[j].age > heroArray[j + 1].age)
            {
                struct Hero temp = heroArray[j];
                heroArray[j] = heroArray[j + 1];
                heroArray[j + 1] = temp;
            }
        }
    }
}

//打印排序后数组中的信息
void printHero(struct Hero heroArray[],int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "姓名：" << heroArray[i].name << "年龄：" << heroArray[i].age << "性别：" << heroArray->sex << endl;
    }
}
int main()
、
    //创建数组存放5名英雄
    struct Hero heroArray[5] =
    {
        {"刘备",33,"男"},
        {"关羽",28,"男"},
        {"张飞",23,"男"},
        {"赵云",18,"男"},
        {"貂蝉",13,"女"},
    };
    
    int len = sizeof(heroArray) / sizeof(heroArray[0]);
    cout << "排序前打印：" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << "姓名：" << heroArray[i].name << "年龄：" << heroArray[i].age << "性别：" << heroArray->sex << endl;
    }

    //对数组进行排列，按照年龄进行升序排序
    bubbleSort(heroArray, len);
    cout << "排序后打印：" << endl;

    //将排序后的结果打印输出
    printHero(heroArray, len);

    system("pause");
    return 0;
}