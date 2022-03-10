//#include <iostream>
//using namespace std;
//
//
////空指針調用成員函數
//class Person
//{
//public:
//	void ShowClassName()
//	{
//		cout << "this is Person Class" << endl;
//	}
//
//	void ShowPersonAge()
//	{
//		//報錯原因是因為傳入的指針為NULL;
//		if (this == NULL )
//		{
//			return;
//		}
//		cout << "age = " << m_Age << endl;
//	}
//
//
//	int m_Age;
//private:
//
//};
//
//void test01()
//{
//	Person* p = NULL;
//
//	p->ShowClassName();
//	
//	p->ShowPersonAge();
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}