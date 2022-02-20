#pragma once
#include <iostream>
using namespace std;

//點類 
class Point
{
public:
	//設置x
	void setx(int x);

	//獲取x
	int getx();
	//設置y
	void sety(int y);

	//獲取y
	int gety();


private:

	int m_X;//X軸

	int m_Y;//Y軸

};
