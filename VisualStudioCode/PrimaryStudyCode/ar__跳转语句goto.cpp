#include<iostream>
using namespace std;

int main()
{   cout << "1,HelloWorld!" << endl;

    cout << "2,HelloWorld!" << endl;
    goto LX;
    cout << "3,HelloWorld!" << endl;

    cout << "4,HelloWorld!" << endl;
    LX:
    cout << "5,HelloWorld!" << endl;

    system("pause");
    return 0;
}