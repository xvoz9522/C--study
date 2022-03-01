//#include <iostream>
//using namespace std;
//
//
////拷貝構造函數調用時機
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默認構造函數構造調用" << endl;
//	}
//
//	Person(int age)
//	{
//		m_age = age;
//		cout << "Person有參函數構造調用" << endl;
//	}
//
//	Person(const Person &p)
//	{
//		m_age = p.m_age;
//		cout << "Person拷貝函數構造調用" << endl;
//	}
//
//
//	~Person()
//	{
//		cout << "~Person析構函數構造調用" << endl;
//	}
//
//	//屬性
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
////1.使用一個已經創建完畢的對象來初始化一個新對象
//void test01()
//{
//	Person p1(10);
//	Person p2(p1);
//	cout << "P2的年齡: " << p2.m_age << endl;
//}
//
//
//
////2.值傳遞的方式給函數參數傳值
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
////3.值方式返回局部對象
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