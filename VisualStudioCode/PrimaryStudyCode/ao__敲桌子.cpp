#include<iostream>
using namespace std;

int main()
{
    //先输出1~100的数字
    for(int i=1;i<100;i++)
    {
        //从100个数字中找到特殊的数字，打印敲桌子
        //如果是7的倍数，个位有7，十位有7，打印敲桌子
        if(i%7==0||i%10==7||i/10==7)  //如果是特殊数字则打印敲桌子
        {
            cout<<"敲桌子"<<endl;
        }
        else  //如果不是特殊数字则打印数字
        {
            cout<<i<<endl;
        }
    }
    
    system("pause");
    return 0;
}