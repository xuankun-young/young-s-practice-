#include <iostream>
using namespace std;
int main24() {
//将所有三位数输出
	//获取个位 十位 百位
//个位：取模于10 十位 ：整数除以10得到一个两位数再取模于10 百位 ：直接整除100 
// 判断
	int x = 100;
	do
	{
		int a = 1;
		int b = 1;
		int c = 1;
		a = x % 10;
		b = (x / 10) % 10;
		c = x / 100;
		if (a*a*a+b*b*b+c*c*c==x)//判断相等用==
		cout << x << endl;
		x++;

	} while (x < 1000);

  	

























	system("pause");
	return 0;
}