//#include <iostream>
//using namespace std;
//
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//
//	//讓visit函數可以訪問Building中私有成員
//	void visit();
//	//讓visit2函數不可以訪問Building中私有成員
//	void visit2();
//
//
//	Building* building;
//
//private:
//
//};
//class Building
//{
//	//告訴編譯氣,GoodGay類下的visit成員函數作為本類的好朋友,可以訪問私有成員權限
//	friend void GoodGay::visit();
//public:
//	Building();
//
//public:
//	//客廳
//	string m_SittingRoom;
//
//
//private:
//	//臥室
//	string m_BedRoom;
//
//};
//
////類外實現
//
//Building::Building()
//{
//	m_SittingRoom = "客廳";
//	m_BedRoom = "臥室";
//}
//
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "visit函數正在訪問: " << building->m_SittingRoom << endl;
//	cout << "visit函數正在訪問: " << building->m_BedRoom << endl;
//}
//
//void GoodGay::visit2()
//{
//	cout << "visit2函數正在訪問: " << building->m_SittingRoom << endl;
//	//cout << "visit2函數正在訪問: " << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//}
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}