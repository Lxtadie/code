#include<iostream>
using namespace std;
#include<string>
#define MAX 100

//设计联系人结构体
struct P
{
    //姓名
    string m_Name;
    //性别  1,男 2，女
    int m_Sex;
    //年龄
    int m_Age;
    //电话
    string m_Phone;
    //住址
    string m_Addr;
};

//设计通讯库结构体
struct Addressbooks
{
    //通讯库中保存的联系人数组
    struct P pArr[MAX];
    //通讯录中当前记录联系人个数
    int m_Size;
};

//1，添加联系人
void addPerson(Addressbooks* abs)
{
    //判断通讯录是否满了，如果满了就不在添加联系人
    if (abs->m_Size == MAX)
    {
        cout << "通讯录已经满了，无法添加" << endl;
        return;
    }
    else
    {
        //添加具体联系人

        //姓名
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->pArr[abs->m_Size].m_Name = name;
        //性别
        cout << "请输入性别：" << endl;
        cout << "1---男" << endl;
        cout << "2---女" << endl;
        int sex = 0;

        while (true)
        {
            //如果输入的是1或2可以退出循环，因为输入的是正确值
            //如果输入有误，则重新输入
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->pArr[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "输入有误，请重新输入" << endl;
        }

        //年龄
        cout << "请输入年龄：" << endl;
        int age = 0;
        cin >> age;
        abs->pArr[abs->m_Size].m_Age = age;

        //电话
        cout << "请输入联系电话：" << endl;
        string Phone;
        cin >> Phone;
        abs->pArr[abs->m_Size].m_Phone = Phone;

        //地址
        cout << "请输入家庭地址：" << endl;
        string address;
        cin >> address;
        abs->pArr[abs->m_Size].m_Addr = address;

        //更新通讯录人数
        abs->m_Size++;
        cout << "添加成功" << endl;

        system("pause");  //请按任意键继续
        system("cls");    //清屏操作
    }

}

//2,显示所有联系人
void showp(Addressbooks* abs)
{
    //判断通讯录中人数是否为0，如果为0，提示记录为空
    //如果不为0，显示记录的联系人信息
    if (abs->m_Size == 0)
    {
        cout << "当前的记录为空" << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            cout << "姓名：" << abs->pArr[i].m_Name << "\t";
            cout << "性别：" << (abs->pArr[i].m_Sex == 1 ? "男" : "女") << "\t";
            cout << "年龄：" << abs->pArr[i].m_Age << "\t";
            cout << "电话：" << abs->pArr[i].m_Phone << "\t";
            cout << "地址：" << abs->pArr[i].m_Addr << endl;
        }
    }
    system("pause");  //请按任意键继续
    system("cls");    //清屏操作

}

//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
//参数1  通讯录
//参数2  对比姓名
int iszaibuzai(Addressbooks* abs, string name)
{
    for (int i = 0; i < abs->m_Size; i++)
    {
        //找到用户输入的姓名了
        if (abs->pArr[i].m_Name == name)
        {
            return i;   //找到了，返回这个人在数组中的下标编号
        }
    }
    return -1;   //如果遍历结束都没有找到，返回-1
}

//3，删除指定联系人
void deper(Addressbooks* abs)           
{
    cout << "请输入您要删除的联系人" << endl;
    string name;
    cin >> name;

    //ret==-1  为查到
    //ret!=-1  查到了
    int ret = iszaibuzai(abs, name);
    if (ret !=- 1)
    {
        //查到此人，要进行删除操作
        for (int i = ret; i < abs->m_Size; i++)
        {
            //数据迁移
            abs->pArr[i] = abs->pArr[i + 1];
        }
        abs->m_Size--;  //更新通讯录中人员的数量
        cout << "删除成功" << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }
    system("pause");  //请按任意键继续
    system("cls");    //清屏操作

}

//4，查找指定联系人信息
void finp(Addressbooks*abs)
{
    cout<<"请输入您要查找的联系人"<<endl;
    string name;
    cin>>name;

    //判断指定的联系人是否存在通讯录中
    int ret=iszaibuzai(abs,name);

    if(ret!=-1)  //找到联系人
    {
        cout<<"姓名："<<abs->pArr[ret].m_Name<<"\t";
        cout<<"性别："<<abs->pArr[ret].m_Sex<<"\t";
        cout<<"年龄："<<abs->pArr[ret].m_Age<<"\t";
        cout<<"电话："<<abs->pArr[ret].m_Phone<<"\t";
        cout<<"地址："<<abs->pArr[ret].m_Addr<<endl;
    }
    else         //未找到联系人
    {
        cout<<"查无此人"<<endl;

    } 
    system("pause");  //请按任意键继续
    system("cls");    //清屏操作
}

//5,修改联系人信息
void modf(Addressbooks*abs)
{
    cout<<"请输入您要修改的联系人"<<endl;
    string name;
    cin>>name;

    int ret=iszaibuzai(abs,name);

    if(ret!=-1)   //找到联系人
    {
        //姓名
        string name;
        cout<<"请输入姓名："<<endl;
        cin>>name;
        abs->pArr[ret].m_Name=name;

        //性别
        cout<<"请输入性别："<<endl;
        cout<<"1————男"<<endl;
        cout<<"2————女"<<endl;
        int sex=0;
        while(true)
        {
            cin>>sex;
            if(sex==1||sex==2)
            {   //输入正确，退出循环
                abs->pArr[ret].m_Sex=sex;
                break;
            }
            cout<<"输入错误，请重新输入"<<endl;
        }

        //年龄
        cout<<"请输入年龄："<<endl;
        int age=0;
        cin>>age;
        abs->pArr[ret].m_Age=age;

        //电话
        cout<<"请输入联系电话："<<endl;
        string phone;
        cin>>phone;
        abs->pArr[ret].m_Phone=phone;

        //地址
        cout<<"请输入家庭住址："<<endl;
        string addrs;
        cin>>addrs;
        abs->pArr[ret].m_Addr=addrs;
        cout<<"修改成功"<<endl;
    }
    else
    {
        cout<<"查无此人"<<endl;
    }

    system("pause");  //请按任意键继续
    system("cls");    //清屏操作
}

//6，清空联系人
void clep(Addressbooks*abs)
{
    abs->m_Size=0;  //将当前记录的联系人置为0，做逻辑清空操作
    cout<<"通讯录已经清空"<<endl;
    system("pause");  //请按任意键继续
    system("cls");    //清屏操作
}

//菜单ui
void new_ui()
{
    cout << "*****  1,添加联系人  *****" << endl;
    cout << "*****  2,显示联系人  *****" << endl;
    cout << "*****  3,删除联系人  *****" << endl;
    cout << "*****  4,查找联系人  *****" << endl;
    cout << "*****  5,修改联系人  *****" << endl;
    cout << "*****  6,清空联系人  *****" << endl;
    cout << "*****  0,退出通讯录  *****" << endl;
}

int main()
{
    //创建通讯录结构体变量
    Addressbooks abs;
    //初始化通讯录中当前人员个数
    abs.m_Size = 0;


    int xunze = 0;  //创建用户选择输入的变量

    while (true)
    {
        new_ui();     //菜单调用
        cin >> xunze;

        switch (xunze)
        {
        case 1:      //1,添加联系人
            addPerson(&abs);   //利用地址传递可以修饰实参
            break;
        case 2:      //2,显示联系人
            showp(&abs);
            break;
        case 3:      //3,删除联系人
            deper(&abs);
            break;
        case 4:      //4,查找联系人
        finp(&abs);
            break;
        case 5:      //5,修改联系人
        modf(&abs);
            break;
        case 6:      //6,清空联系人
        clep(&abs);
            break;
        case 0:      //0,退出通讯录
            cout << "欢迎下次使用" << endl;
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }

    system("pause");
    return 0;
}