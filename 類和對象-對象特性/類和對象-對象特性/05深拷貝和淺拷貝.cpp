//#include <iostream>
//using namespace std;
//
////深拷貝與淺拷貝
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默認構造函數調用" << endl;
//	}
//	Person(int age,int Height)
//	{
//		m_Age = age;
//		m_Height = new int(Height);
//		cout << "Person有參構造函數調用" << endl;
//	}
//
//	//自己實現拷貝構造函數 解決淺拷貝帶來的問題
//	Person(const Person &p)
//	{
//		cout << "Person拷貝構造函數調用" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height; 邊譯器默認實現就是這行代碼
//		//深拷貝
//
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person()
//	{
//		//析構代碼 , 將堆區開闢數據做釋放操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person析構函數調用" << endl;
//	}
//
//	int m_Age = 0;//年齡
//	int* m_Height = 0;//身高
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
//	cout <<"年齡: " << p.m_Age<<" 身高: "<<*p.m_Height << endl;
//	Person p1(p);
//	cout << "年齡: " << p1.m_Age << " 身高: " << *p1.m_Height << endl; 
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