//#include <iostream>
//using namespace std;
//
//
////類對象作為類成員
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		cout << "Phone的構造函數調用" << endl;
//		m_Pname = pName;
//	}
//	~Phone()
//	{
//		cout << "Phone的析構函數調用" << endl;
//	}
//	//~Phone();
//    //手機品牌名子
//	string m_Pname;
//	//號碼
//	
//private:
//
//};
//
//
//
//class Person
//{
//public:
//	//Phone m_Phone = PName 隱式轉換法
//	Person(string name, string PName):m_Name(name),m_Phone(PName)
//	{
//		cout << "Person的構造函數調用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析構函數調用" << endl;
//	}
//	//~Person();
//    //姓名
//	string m_Name;
//	//手機
//	Phone m_Phone;
//
//private:
//
//};
//
////當其他類的對象作為本類對象,構造時候先構造類對象,再構造自身,析構的順序與構造相反
//
//void test01()
//{
//	Person p("李威德","sony Grint");
//	cout << p.m_Name << "拿著" << p.m_Phone.m_Pname << endl;
//}
//
//
//
//
//
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}