//#include <iostream>
//using namespace std;
//
//
////建築物類
//class Building
//{
//	//GoodGay全局函數是,Building好朋友 ,可以訪問Building中私有成員
//	friend void GoodGay(Building& Building);
//public:
//	Building()
//	{
//		m_SittingRoom = "客廳";
//		m_BedRoom = "臥室";
//	}
//
//
//public:
//	
//	string m_SittingRoom;//客廳
//
//private:
//
//	string m_BedRoom;//臥室
//
//};
//
//
////全局函數
//void GoodGay(Building &Building)
//{
//	cout << "好朋友全局函數 正在訪問:: " << Building.m_SittingRoom << endl;
//
//	cout << "好朋友全局函數 正在訪問:: " << Building.m_BedRoom << endl;
//}
//
//void test01()
//{
//
//	Building building;
//	GoodGay(building);
//}
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