//#include <iostream>
//using namespace std;
//
//
////�����c�y��ƽեήɾ�
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person�q�{�c�y��ƺc�y�ե�" << endl;
//	}
//
//	Person(int age)
//	{
//		m_age = age;
//		cout << "Person���Ѩ�ƺc�y�ե�" << endl;
//	}
//
//	Person(const Person &p)
//	{
//		m_age = p.m_age;
//		cout << "Person������ƺc�y�ե�" << endl;
//	}
//
//
//	~Person()
//	{
//		cout << "~Person�R�c��ƺc�y�ե�" << endl;
//	}
//
//	//�ݩ�
//
//	int m_age = 0;
//
//private:
//
//	
//
//
//};
//
////1.�ϥΤ@�Ӥw�g�Ыا�������H�Ӫ�l�Ƥ@�ӷs��H
//void test01()
//{
//	Person p1(10);
//	Person p2(p1);
//	cout << "P2���~��: " << p2.m_age << endl;
//}
//
//
//
////2.�ȶǻ����覡����ưѼƶǭ�
//
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	Person p;
//	doWork(p);
//}
//
////3.�Ȥ覡��^������H
//Person doWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;
//}
//
//
//int main()
//{
//
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//	return 0;
//}