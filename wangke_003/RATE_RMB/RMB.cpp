#include<iostream>
using namespace std;

int main()
{
	double income, rate1, rate2, rate3, rate4, tax;
	rate1 = 0.03; rate2 = 0.04; rate3 = 0.05; rate4 = 0.06;
	cin >> income;
	if (income < 0)
		cout << "ÎÞÐ§Êý×Ö";
	else
	{
		if (income < 1000)
		{
			tax = income * rate1;
			cout << tax;
		}
		else
		{
			if (1000<= income&&income <= 2000)
				//(1000 <= income < 2000)"1000<=income"-->  0/1(flase/true)
				//--> "1 & 0 <= 2000"  -->  1(true)
			{
				tax = income * rate2;
				cout << tax;
			}
			else
			{
				if (2000 <= income < 3000)
				{
					tax = income * rate3;
					cout << tax;
				}
				else
				{
					tax = income * rate4;
					cout << tax;
				}

			}
		}
	
	}
	return 0;
}