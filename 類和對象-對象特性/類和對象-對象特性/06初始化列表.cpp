//#include <iostream>
//using namespace std;
//
////初始化列表
//class Person
//{
//public:
//	////傳統初始化操作
//	//Person(int a,int b,int c)
//	//{
//	//	m_A = a;
//	//	m_B = b;
//	//	m_C = c;
//	//}
//
//	//~Person();
//	//初始化列表初始化屬性
//	Person(int a,int b,int c) :m_A(a), m_B(b), m_C(c)
//	{
//
//	}
//	void test02()
//	{
//		cout << "A: " << m_A << endl;
//		cout << "B: " << m_B << endl;
//		cout << "C: " << m_C << endl;
//	}
//	/*int m_A;
//	int m_B;
//	int m_C;*/
//
//private:
//	int m_A;
//	int m_B;
//	int m_C;
//};
//
////void test01()
////{
////	//Person p(80, 50, 30);
////	Person P(80,60,100);
////	cout << "A: " << P.m_A << endl;
////	cout << "B: " << P.m_B << endl;
////	cout << "C: " << P.m_C << endl;
////
////}
//
//int main()
//{
//
//	//test01();
//	Person p(88, 66, 125);
//	p.test02();
//
//	system("pause");
//	return 0;
//}