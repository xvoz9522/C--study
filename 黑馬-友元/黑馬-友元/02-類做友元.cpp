//#include <iostream>
//using namespace std;
//
////�����ͤ�
//
//class Building
//{
//	//GoodGay���O�������n�B��,�i�H�X�ݥ��������p������
//	friend class GoodGay;
//public:
//
//	Building();
//
//public:
//	string m_SittingRoom;//���U
//
//
//private:
//
//	string m_BedRoom;//�׫�
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
//	void visit();//���[��� �X��Building�����ݩ�
//	//Building*building;
//
//private:
//	Building* building;
//};
//
////���~�h�g�������
//Building::Building()
//{
//	m_BedRoom = "�׫�";
//	m_SittingRoom = "���U";
//
//}
//GoodGay::GoodGay()
//{
//	//�гy�ؿv����H
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "�n�B�������b�X��: " << building->m_SittingRoom << endl;
//	cout << "�n�B�������b�X��: " << building->m_BedRoom << endl;
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