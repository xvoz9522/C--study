#include <iostream>
using namespace std;

//立方體類設計
//1.創建立方體類
//2.設計屬性
//3.設計行為,獲取立方體體積,面積
//4.分別利用全局函數和成員函數判斷兩個立方體是否相等
class Cube
{
public:
	//行為

	//設置長寬高
	void setl(int l)
	{
		m_L = l;
	}
	void setw(int w)
	{
		m_W = w;
	}
	void seth(int h)
	{
		m_H = h;
	}
	//獲取長寬高
	int getL()
	{
		return m_L;
	}
	int getW()
	{
		return m_W;
	}
	int getH()
	{
		return m_H;
	}

	//面積和
	int calculateS()
	{
		return 2 * m_W * m_L + 2 * m_W * m_H + 2 * m_L * m_H;
	}


	//體積
	int calculateV()
	{
		return m_W * m_L * m_H;
	}


private:
	//屬性
	int m_W = 0;//寬
	int m_L = 0;//長
	int m_H = 0;//高
};

//利用全局函數判斷 兩個立方體是否相等
bool isSame(Cube &c1, Cube &c2)
{
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
	{
		return true;
	}
	else
	{
		return false;
	}
}



int main()
{

	//創建立方體對象
	Cube c1;
	c1.setl(10);
	c1.setw(20);
	c1.seth(5);

	cout << "c1面積和 = " << c1.calculateS() << endl;
	cout << "c1體積 = " << c1.calculateV() << endl;
	//創建第2立方體
	Cube c2;
	c2.setl(10);
	c2.setw(20);
	c2.seth(4);

	bool ret = isSame(c1, c2);
	cout << "對否? = " << ret << endl;

	system("pause");
	return 0;
}