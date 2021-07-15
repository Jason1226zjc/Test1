#include<iostream>
#include<Windows.h>
#include<stdlib.h>
using namespace std;
int main()
{
	long long a = 0;
	long long b = 0;
	int i = 0;
	int sum = 0;
	cout << "-------正在初始化-------";
	Sleep(1000);
	system("cls");
	cout << "欢迎使用计算器";
	cout << endl;
	cout << "想要帮助吗？请输入‘1’加上‘回车’";
	cout << "不想帮助？请按‘0’";
	cout << endl;
	cin >> sum;
	if (sum == 1)
	{
		cout << "先输入第一个数";
		Sleep(500);
		cout << endl;
		cout << "比如：3";
		Sleep(500);
		cout << endl;
		cout << "输入空格，在输入另一个数";
		Sleep(500);
		cout << endl;
		cout << "比如：5";
		Sleep(500);
		cout << endl;
		cout << "系统自动会识别和计算";
		Sleep(500);
		cout << endl;
		cout << "比如：";
		Sleep(500);
		cout << endl;
		cout << "3 5";
		cout << "3+5=8";
		cout << endl;
		cout << "你还想继续计算吗？";
		Sleep(500);
		cout << "--------end--------";
		Sleep(1000);
		system("cls");
	}
	cout << "-------正在初始化-------";
	Sleep(1000);
	system("cls");
	while (i == 0)
	{
		cin >> a;
		cin >> b;
		cout << a;
		cout << "+";
		cout << b;
		cout << "=";
		cout << a + b;
		cout << endl;
		cout << "你还想继续吗？";
		cout << "结束请按‘1’";
		cout << "继续请按‘0’";
		cin >> i;
		if (i == 0)
		{
			return 0;
		}
	}
}