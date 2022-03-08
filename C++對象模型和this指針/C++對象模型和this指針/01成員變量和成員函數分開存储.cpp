//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	
//	//非靜態成員變量 屬於類的對象上
//	int m_A;
//	//靜態成員變量 不屬於類的對象上
//	static int m_B;
//	//非靜態成員函數 不屬於類的對象上
//	void func01() {};
//	//靜態成員函數 不屬於類的對象上
//	static void func02() {};
//
//private:
//
//};
//
//int Person::m_B = 0;
//
//void test01()
//{
//	Person p;
//	//空對象佔用內存空間為: 1 字節
//	//C++邊譯器會給每個空對象也分配一個字節空間,是為了區分空對象站內存位置
//	//每個空對象也應該有一個獨一無二的內存地址
//	cout << "sizeof of a = " << sizeof(p) << endl;
//};
//
//void test02()
//{
//	Person p;
//	cout << "sizeof of a = " << sizeof(p) << endl;
//}
//
//
//int main()
//{
//
//	//test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}