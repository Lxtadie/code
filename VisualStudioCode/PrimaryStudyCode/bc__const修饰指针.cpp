#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 10;

	const int* p=& a;	//const修饰指针 指针常量，指针指向的值不可以更改，指针的指向可以更改
	//*p＝20;  错误
	p=&b;  //正确

	int* const p2=&a;   //const修饰常量  指针常量，指针的指向不可以更改，指针指向的值可以更改
	*p2 = 100;  //正确
	//p2＝&b;  错误

	const int* const p3=&a;   //const修饰指针和常量，指针的指向和指针指向的值都不可以更改                             
	//*p3＝100;  错误
	//p3=&b;  错误

	system("pause");
	return 0;
}