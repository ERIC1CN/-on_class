#include<iostream>
using namespace std;

int main()
{
	int i = 0, t1 = 0, sum = 0, t2 = 0;
	while (i < 10)
	{
		t1 = i;
		i = t1 + 1;
		t2 = sum;
		sum = t2 + i;
	}
	cout << "1到10的求和为:" << sum << endl;
	return 0;
}
//result 55 RIGHT!
