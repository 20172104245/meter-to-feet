// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
using namespace std;
class High
{
private:
	int feet;
	double inch;

public:
	void sets(int a, double b)
	{
		for (int i = 0; b>12; i++)
		{
			b = b - 12;
			a++;
		}
		feet = a;
		inch = b;
	}
	void display()
	{
		cout << feet << "英尺" << inch << "英寸" << endl;
	}
	void meter(double meter)
	{
		feet = meter*3.2808;
		inch = (meter*3.2808 - feet) * 12;
	}
};
int main()
{
	High ot;
	ot.sets(6, 40);
	ot.display();
	ot.meter(10.5);
	ot.display();
	return 0;
}