//#include <iostream>
//using namespace std;
//
////�`�����P�L����
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person�q�{�c�y��ƽե�" << endl;
//	}
//	Person(int age,int Height)
//	{
//		m_Age = age;
//		m_Height = new int(Height);
//		cout << "Person���Ѻc�y��ƽե�" << endl;
//	}
//
//	//�ۤv��{�����c�y��� �ѨM�L�����a�Ӫ����D
//	Person(const Person &p)
//	{
//		cout << "Person�����c�y��ƽե�" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height; ��Ķ���q�{��{�N�O�o��N�X
//		//�`����
//
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person()
//	{
//		//�R�c�N�X , �N��϶}�P�ƾڰ�����ާ@
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person�R�c��ƽե�" << endl;
//	}
//
//	int m_Age = 0;//�~��
//	int* m_Height = 0;//����
//
//private:
//	  
//};
//
//
//
//void test01()
//{
//	Person p(10,130);
//	cout <<"�~��: " << p.m_Age<<" ����: "<<*p.m_Height << endl;
//	Person p1(p);
//	cout << "�~��: " << p1.m_Age << " ����: " << *p1.m_Height << endl; 
//}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}