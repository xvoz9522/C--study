#include <iostream>
#include "Circle.h"
#include"Point.h"
using namespace std;

//點和圓的關係案例
////點類 
//class Point
//{
//public:
//	//設置x
//	void setx(int x)
//	{
//		m_X = x;
//	}
//	//獲取x
//	int getx()
//	{
//		return m_X;
//	}
//	//設置y
//	void sety(int y)
//	{
//		m_Y = y;
//	}
//
//	//獲取y
//	int gety()
//	{
//		return m_Y;
//	}
//
//
//private:
//
//	int m_X;//X軸
//
//	int m_Y;//Y軸
//
//};





////圓類
//class Circle
//{
//public:
//	//設置半徑
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//獲得半徑
//	int getR()
//	{
//		return m_R;
//	}
//	//設置圓心
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//獲取圓心
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//
//private:
//
//	int m_R;//半徑
//
//	//在類中可以讓另一個類,作為本類中的成員
//	Point m_Center;//圓心
//    
//
//};

//判斷點和圓之間關係
void isInCircle(Circle& c, Point& p)
{
	//計算兩點距離的 平方
	int distance =
		(c.getCenter().getx() - p.getx()) * (c.getCenter().getx() - p.getx()) +
		(c.getCenter().gety() - p.gety()) * (c.getCenter().gety() - p.gety());
	//計算半徑的平方
	int rDistance = c.getR() * c.getR();

	//判斷關係
	if (distance == rDistance)
	{
		cout << "點在圓上" << endl;
	}
	else if(distance > rDistance)
	{
		cout << "點在圓外" << endl;
	}
	else if (distance < rDistance)
	{
		cout << "點在圓內" << endl;
	}
	{
		
	}


}




int main()
{
	//創建圓
	Circle c;
	c.setR(10);
	Point center;
	center.setx(10);
	center.sety(0);
	c.setCenter(center);
	//創建點
	Point p;
	p.setx(10);
	p.sety(10);
	//判斷關係
	isInCircle(c, p); 


	system("pause");
	return 0;
}