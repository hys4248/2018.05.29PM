// 2018.05.29PM.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue(int foot, int inch)
	{
		feet = foot;
		inches = inch;
	}
	CFeet operator +(CFeet&o)
	{
		CFeet temp;
		inches = feet * 12 + inches;
		o.inches = o.feet * 12 + o.inches;
		temp.setvalue((inches + o.inches) / 12, (inches + o.inches) % 12);
		return temp;
	}

	void display()
	{
		cout << feet << " feet " << inches << "inches" << endl;
	}

};
int main()
{
	int x1, x2, y1, y2;
	CFeet A, B, C;
	cin >> x2 >> y2;
	A.setvalue(x2, y2);
	cin >> x1 >> y1;
	B.setvalue(x1, y1);
	C = A + B;
	C.display();
	return 0;
}
