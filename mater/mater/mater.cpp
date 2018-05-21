// mi_feet.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CTex
{
private:
	int feet;
	int inch;
public:
	CTex()
	{
		feet = 0;
		inch = 0;
	}
	void setvalue(int a, int b);
	void display();
	void mater(int m);
};
void CTex::setvalue(int a, int b)
{
	feet = a;
	inch = b;

}
void CTex::display()
{
	cout << "feet=" << feet << "  inch=" << inch << endl;
}
void CTex::mater(int m)
{
	//	1m = 3.2808ft
	double ad;
	ad = m*3.2808;
	feet = ad;
	ad = ad - feet;
	inch = ad * 12;
}

int main()
{
	CTex o1;
	o1.setvalue(5, 6);
	o1.display();
	o1.mater(10);
	o1.display();
	return 0;
}



