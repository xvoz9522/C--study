//#include <iostream>
//using namespace std;
//
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//
//	//��visit��ƥi�H�X��Building���p������
//	void visit();
//	//��visit2��Ƥ��i�H�X��Building���p������
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
//	//�i�D�sĶ��,GoodGay���U��visit������Ƨ@���������n�B��,�i�H�X�ݨp�������v��
//	friend void GoodGay::visit();
//public:
//	Building();
//
//public:
//	//���U
//	string m_SittingRoom;
//
//
//private:
//	//�׫�
//	string m_BedRoom;
//
//};
//
////���~��{
//
//Building::Building()
//{
//	m_SittingRoom = "���U";
//	m_BedRoom = "�׫�";
//}
//
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "visit��ƥ��b�X��: " << building->m_SittingRoom << endl;
//	cout << "visit��ƥ��b�X��: " << building->m_BedRoom << endl;
//}
//
//void GoodGay::visit2()
//{
//	cout << "visit2��ƥ��b�X��: " << building->m_SittingRoom << endl;
//	//cout << "visit2��ƥ��b�X��: " << building->m_BedRoom << endl;
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