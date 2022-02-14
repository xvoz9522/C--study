//#include <iostream>
//using namespace std;
//
////設計一個學生類,屬性有姓名和學號
////可以給姓名和學號賦值,可以顯示學生的姓名和學號
//
////設計學生類
//class Student
//{
//public://公共權限
//
//	//類中的屬性和行為 我們統一稱為 成員
//	//屬性  成員屬性 成員變量
//	//行為  成員函數 成員方法
//
//
//	//屬性
//	string sdname;//姓名
//	int m_Id = 0;//學號
//
//	//行為
//	//顯示姓名和學號
//	void showStudent()
//	{
//		cout << "名子: " << sdname << " 學號: " << m_Id << " 號 " << endl;
//	}
//	//給姓名賦值
//	void setname(string name)
//	{
//		sdname = name;
//	}
//	//給ID賦值
//	void setID(int ID)
//	{
//		m_Id = ID;
//	}
//
//
//private:
//
//};
//
//
//
//
//int main()
//{
//
//	//創建一個具體的學生
//	//實例化對象
//
//	Student s1;
//	//s1.name = "李威德";
//	s1.setname("李威德");
//	//s1.m_Id = 1;
//	s1.setID(1);
//
//	s1.showStudent();
//
//	Student s2;
//	s2.sdname = "琛琛";
//	s2.m_Id = 2;
//
//	s2.showStudent();
//
//
//	//cout << "名子: " << st1.name << " 學號: " << st1.sdcode <<" 號 " << endl;
//
//
//	system("pause");
//	return 0;
//}