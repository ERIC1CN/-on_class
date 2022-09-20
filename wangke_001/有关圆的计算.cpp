//_CRT_SEURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
//#include<cstdio>
//#include<cstring>
using namespace std;
int main()
{
	const double PI = 3.14159265;
	printf("请分别输入圆的半径和圆柱的高:");
	double r = 0, h = 0, circle_length = 0, circle_areal = 0, sphere_areal = 0, cylinder_volume = 0;

	scanf("%lf %lf", &r, &h);
	circle_length = 2 * PI * r;
	circle_areal = PI * r * r;
	sphere_areal = 4 * PI * r * r;
	cylinder_volume = h * PI * r * r;

	printf("圆的周长是%f,圆的面积是%f,圆球的表面积是%f,圆柱的体积是%f", (circle_length)(circle_areal)(sphere_areal)(cylinder_volume) );

	//cout << "面积:" << area1 << endl;
	//cout << "周长:" << length << endl;
	return 0;
}