#include <iostream>
using namespace std;
int main24() {
//��������λ�����
	//��ȡ��λ ʮλ ��λ
//��λ��ȡģ��10 ʮλ ����������10�õ�һ����λ����ȡģ��10 ��λ ��ֱ������100 
// �ж�
	int x = 100;
	do
	{
		int a = 1;
		int b = 1;
		int c = 1;
		a = x % 10;
		b = (x / 10) % 10;
		c = x / 100;
		if (a*a*a+b*b*b+c*c*c==x)//�ж������==
		cout << x << endl;
		x++;

	} while (x < 1000);

  	

























	system("pause");
	return 0;
}