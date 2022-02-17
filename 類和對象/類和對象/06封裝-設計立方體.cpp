#include <iostream>
using namespace std;

//�ߤ������]�p
//1.�Ыإߤ�����
//2.�]�p�ݩ�
//3.�]�p�欰,����ߤ�����n,���n
//4.���O�Q�Υ�����ƩM������ƧP�_��ӥߤ���O�_�۵�
class Cube
{
public:
	//�欰

	//�]�m���e��
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
	//������e��
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

	//���n�M
	int calculateS()
	{
		return 2 * m_W * m_L + 2 * m_W * m_H + 2 * m_L * m_H;
	}


	//��n
	int calculateV()
	{
		return m_W * m_L * m_H;
	}


private:
	//�ݩ�
	int m_W = 0;//�e
	int m_L = 0;//��
	int m_H = 0;//��
};

//�Q�Υ�����ƧP�_ ��ӥߤ���O�_�۵�
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

	//�Ыإߤ����H
	Cube c1;
	c1.setl(10);
	c1.setw(20);
	c1.seth(5);

	cout << "c1���n�M = " << c1.calculateS() << endl;
	cout << "c1��n = " << c1.calculateV() << endl;
	//�Ыز�2�ߤ���
	Cube c2;
	c2.setl(10);
	c2.setw(20);
	c2.seth(4);

	bool ret = isSame(c1, c2);
	cout << "��_? = " << ret << endl;

	system("pause");
	return 0;
}