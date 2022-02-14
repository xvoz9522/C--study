//#include <iostream>
//using namespace std;
//
////訪問權限
////三種
////公共權限 public    成員 類內可以訪問 類外可以訪問
////保護權限 protected 成員 類內可以訪問 類外不可以訪問 子類可以訪問父類保護內容
////私有權限 private   成員 類內可以訪問 類外不可以訪問 子類不可以訪問父類私有內容
//
//
//class Person
//{
//public:
//	//公共權限
//	string m_Name;//名子
//
//protected:
//	//保護權限
//	string m_Car;//汽車
//
//private:
//	//私有權限
//	int m_password = 0;//銀行密碼
//
//public:
//	void func()
//	{
//		m_Name = "李威德";
//		m_Car = "馬克18號";
//		m_password = 1024;
//		cout << m_Name << m_Car << m_password << endl;
//	}
//
//
//};
//
//
//
//int main()
//{
//	Person p1;
//	p1.m_Name = "Shine";
//	//p1.m_Car = "88";//保護權限內容 在類外訪問不到
//	//p1.m_password = 1245;//私有權限內容 在類外訪問不到
//	p1.func();
//
//
//	system("pause");
//	return 0;
//}