#include <iostream>
#include "Circle.h"
#include"Point.h"
using namespace std;

//�I�M�ꪺ���Y�ר�
////�I�� 
//class Point
//{
//public:
//	//�]�mx
//	void setx(int x)
//	{
//		m_X = x;
//	}
//	//���x
//	int getx()
//	{
//		return m_X;
//	}
//	//�]�my
//	void sety(int y)
//	{
//		m_Y = y;
//	}
//
//	//���y
//	int gety()
//	{
//		return m_Y;
//	}
//
//
//private:
//
//	int m_X;//X�b
//
//	int m_Y;//Y�b
//
//};





////����
//class Circle
//{
//public:
//	//�]�m�b�|
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//��o�b�|
//	int getR()
//	{
//		return m_R;
//	}
//	//�]�m���
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//������
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//
//private:
//
//	int m_R;//�b�|
//
//	//�b�����i�H���t�@����,�@��������������
//	Point m_Center;//���
//    
//
//};

//�P�_�I�M�ꤧ�����Y
void isInCircle(Circle& c, Point& p)
{
	//�p����I�Z���� ����
	int distance =
		(c.getCenter().getx() - p.getx()) * (c.getCenter().getx() - p.getx()) +
		(c.getCenter().gety() - p.gety()) * (c.getCenter().gety() - p.gety());
	//�p��b�|������
	int rDistance = c.getR() * c.getR();

	//�P�_���Y
	if (distance == rDistance)
	{
		cout << "�I�b��W" << endl;
	}
	else if(distance > rDistance)
	{
		cout << "�I�b��~" << endl;
	}
	else if (distance < rDistance)
	{
		cout << "�I�b�ꤺ" << endl;
	}
	{
		
	}


}




int main()
{
	//�Ыض�
	Circle c;
	c.setR(10);
	Point center;
	center.setx(10);
	center.sety(0);
	c.setCenter(center);
	//�Ы��I
	Point p;
	p.setx(10);
	p.sety(10);
	//�P�_���Y
	isInCircle(c, p); 


	system("pause");
	return 0;
}