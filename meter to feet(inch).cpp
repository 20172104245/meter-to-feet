// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << feet << "Ӣ��" << inch << "Ӣ��" << endl;
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