//_CRT_SEURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
//#include<cstdio>
//#include<cstring>
using namespace std;
int main()
{
	const double PI = 3.14159265;
	printf("��ֱ�����Բ�İ뾶��Բ���ĸ�:");
	double r = 0, h = 0, circle_length = 0, circle_areal = 0, sphere_areal = 0, cylinder_volume = 0;

	scanf("%lf %lf", &r, &h);
	circle_length = 2 * PI * r;
	circle_areal = PI * r * r;
	sphere_areal = 4 * PI * r * r;
	cylinder_volume = h * PI * r * r;

	printf("Բ���ܳ���%f,Բ�������%f,Բ��ı������%f,Բ���������%f", (circle_length)(circle_areal)(sphere_areal)(cylinder_volume) );

	//cout << "���:" << area1 << endl;
	//cout << "�ܳ�:" << length << endl;
	return 0;
}