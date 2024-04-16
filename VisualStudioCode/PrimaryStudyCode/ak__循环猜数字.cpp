#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
    int guessCount = 0; // 添加一个猜测次数的计数器

    while (guessCount < 5) // 只允许用户猜5次
    {
        int remainingGuesses = 5 - guessCount; // 计算剩余猜测次数
        cout << "请输入一个数（你还有 " << remainingGuesses << " 次猜测机会）" << endl;
        int su = 0;
        cin >> su;
        guessCount++;

        if (num < su)
        {
            cout << "猜测过大" << endl;
        }
        else if (num > su)
        {
            cout << "猜测过小" << endl;
        }
        else
        {
            cout << "猜对了" << endl;
            return 0; // 猜对后立即结束程序
        }
    }

    cout << "猜测失败，正确答案是：" << num << endl; // 5次猜测后提示失败

    system("pause");
    return 0;
}