//#include <iostream>
//using namespace std;
//
////1 解決名稱衝突
//
////2 返回對象本身用*this
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//this指針指向被調用的成員函數所屬的對象
//		this->age = age;
//	}
//	Person& PersonAddAGE(Person &p)
//	{
//		this->age += p.age;
//		//this指向p2的指針 ,而*this指向的就是p2這個對象本體
//		return *this;
//	}
//
//
//	int age;
//private:
//
//};
//
////1 解決名稱衝突
//void test01()
//{
//	Person p1(10);
//	Person p2(20);
//	cout <<"p1的年齡為多少: " << p1.age << endl;
//	cout << "p2的年齡為多少: " << p2.age << endl;
//	//p2.PersonAddAGE(p1);
//
//}
////2 返回對象本身用*this
//void test02()
//{
//	Person p1(17);
//	cout << "p1的年齡為多少: " << p1.age << endl;
//	Person p2(p1);
//	cout << "p2的年齡為多少: " << p2.age << endl;
//	//鍊式編成思想
//	p2.PersonAddAGE(p1).PersonAddAGE(p1).PersonAddAGE(p1);
//	cout << "p2的年齡為多少: " << p2.age << endl;
//}
//
//int main()
//{
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}