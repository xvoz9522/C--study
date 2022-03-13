//#include <iostream>
//using namespace std;
//
////類做友元
//
//class Building
//{
//	//GoodGay類是本類的好朋友,可以訪問本類中的私有成員
//	friend class GoodGay;
//public:
//
//	Building();
//
//public:
//	string m_SittingRoom;//客廳
//
//
//private:
//
//	string m_BedRoom;//臥室
//
//};
//
//
//
//class GoodGay
//{
//public:
//
//	GoodGay();
//
//	void visit();//參觀函數 訪問Building中的屬性
//	//Building*building;
//
//private:
//	Building* building;
//};
//
////類外去寫成員函數
//Building::Building()
//{
//	m_BedRoom = "臥室";
//	m_SittingRoom = "客廳";
//
//}
//GoodGay::GoodGay()
//{
//	//創造建築物對象
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "好朋友類正在訪問: " << building->m_SittingRoom << endl;
//	cout << "好朋友類正在訪問: " << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
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