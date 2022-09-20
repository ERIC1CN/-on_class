#include<iostream>
using namespace std;
int main()
{
	double a = 0;
	cout << "请输入您的分数："  ;
	cin >> a;
	cout << "您的分数属于";
	if (a >= 60)
	{
		cout << "及格" << endl;
	}
	else
	{
		cout << "不及格" << endl;
	}
	return 0;

}