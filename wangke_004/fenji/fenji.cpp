#include<iostream>
using namespace std;

int main()
{
	int grade;
	cin >> grade; //75
	if (grade < 0 || grade > 100)
		cout << "�ɼ���Ч��" << endl;
	else //�ɼ���Ч
		switch (grade / 10)//���ʽ�Ĺ���
		{
		case 10:        //cout << "�ŵ�" << endl; break;
		case 9:cout << "�ŵ�" << endl; break;
		case 8:cout << "����" << endl; break;
		case 7:cout << "�е�" << endl; break;
		case 6: cout << "����" << endl; break;
		default:cout << "������" << endl;
		}//break����֮��(��������ĳ���)
	//switch ��������if elseǶ��Ҫ���
	return 0;

}