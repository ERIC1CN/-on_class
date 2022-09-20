#include<iostream>
using namespace std;

int main()
{
	int grade;
	cin >> grade; //75
	if (grade < 0 || grade > 100)
		cout << "成绩无效！" << endl;
	else //成绩有效
		switch (grade / 10)//表达式的构造
		{
		case 10:        //cout << "优等" << endl; break;
		case 9:cout << "优等" << endl; break;
		case 8:cout << "良好" << endl; break;
		case 7:cout << "中等" << endl; break;
		case 6: cout << "及格" << endl; break;
		default:cout << "不及格" << endl;
		}//break到达之处(跳过后面的程序)
	//switch 看起来比if else嵌套要简洁
	return 0;

}