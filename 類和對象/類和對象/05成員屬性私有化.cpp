//#include <iostream>
//using namespace std;
//
////�����ݩʨp����
////1.�i�H�ۤv����Ū�g�v��
////2.���g�i�H�˴��ƾڪ����ĩ�
//
//
////�]�p�H��
//class Person
//{
//public:
//
//	//�]�m�m�W
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//����m�W
//	string getName()
//	{
//		return m_Name;
//	}
//	//����~�� �iŪ�i�g �p�G�Q�ק�(�~�ֽd�򥲶��O0~100����)
//	int getAge()
//	{
//		//m_Age = 0;//��l�ƹs��
//		return m_Age;
//	}
//	//�]�m�~��
//	void setAge(int Age)
//	{
//		if (Age < 0 || Age>150)
//		{
//			m_Age = 0;
//			cout << "���~" << endl;
//			return;
//		}
//
//		m_Age = Age;
//	}
//
//
//	//�]�m�R�H �u�g
//	void setLover(string Love)
//	{
//		m_LovePer = Love;
//	}
//
//
//private:
//	//�m�W  �iŪ�i�g
//	string m_Name;
//	//�~��  �uŪ
//	int m_Age =18 ;
//	//�R�H  �u�g
//	string m_LovePer;
//
//};
//
//
//
//int main()
//{
//	Person p1;
//	p1.setName("���¼w");
//	
//	cout << "�m�W: " << p1.getName() << endl;
//
//	p1.setAge(18);
//	cout << "�~��: " << p1.getAge() << endl;
//
//	//�]�m�R�H
//	p1.setLover("��");
//
//	system("pause");
//	return 0;
//}