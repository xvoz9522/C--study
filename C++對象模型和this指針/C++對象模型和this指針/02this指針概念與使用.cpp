//#include <iostream>
//using namespace std;
//
////1 解決名稱衝突
//
////2 返回對象本身用*this
//
//class person
//{
//public:
//	person(int age)
//	{
//		//this指針指向被調用的成員函數所屬的對象
//		this->age = age;
//	}
//	person& personaddage(person &p)
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
//	person p1(10);
//	person p2(20);
//	cout <<"p1的年齡為多少: " << p1.age << endl;
//	cout << "p2的年齡為多少: " << p2.age << endl;
//	//p2.personaddage(p1);
//
//}
////2 返回對象本身用*this
//void test02()
//{
//	person p1(17);
//	cout << "p1的年齡為多少: " << p1.age << endl;
//	person p2(p1);
//	cout << "p2的年齡為多少: " << p2.age << endl;
//	//鍊式編成思想
//	p2.personaddage(p1).personaddage(p1).personaddage(p1);
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