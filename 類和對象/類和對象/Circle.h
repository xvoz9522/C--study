#pragma once
#include <iostream>
#include "Point.h"
using namespace std;

//����
class Circle
{
public:
	//�]�m�b�|
	void setR(int r);

	//��o�b�|
	int getR();

	//�]�m���
	void setCenter(Point center);

	//������
	Point getCenter();



private:

	int m_R;//�b�|

	//�b�����i�H���t�@����,�@��������������
	Point m_Center;//���


};

