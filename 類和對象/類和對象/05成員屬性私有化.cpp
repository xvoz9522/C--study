//#include <iostream>
//using namespace std;
//
////成員屬性私有化
////1.可以自己控制讀寫權限
////2.對於寫可以檢測數據的有效性
//
//
////設計人類
//class Person
//{
//public:
//
//	//設置姓名
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//獲取姓名
//	string getName()
//	{
//		return m_Name;
//	}
//	//獲取年齡 可讀可寫 如果想修改(年齡範圍必須是0~100之間)
//	int getAge()
//	{
//		//m_Age = 0;//初始化零歲
//		return m_Age;
//	}
//	//設置年齡
//	void setAge(int Age)
//	{
//		if (Age < 0 || Age>150)
//		{
//			m_Age = 0;
//			cout << "錯誤" << endl;
//			return;
//		}
//
//		m_Age = Age;
//	}
//
//
//	//設置愛人 只寫
//	void setLover(string Love)
//	{
//		m_LovePer = Love;
//	}
//
//
//private:
//	//姓名  可讀可寫
//	string m_Name;
//	//年齡  只讀
//	int m_Age =18 ;
//	//愛人  只寫
//	string m_LovePer;
//
//};
//
//
//
//int main()
//{
//	Person p1;
//	p1.setName("李威德");
//	
//	cout << "姓名: " << p1.getName() << endl;
//
//	p1.setAge(18);
//	cout << "年齡: " << p1.getAge() << endl;
//
//	//設置愛人
//	p1.setLover("紗");
//
//	system("pause");
//	return 0;
//}