//#include <iostream>
//using namespace std;
//
////�R�A�����ܶq
//
//
//class Person
//{
//public:
//	//Person();
//	//~Person();
//    
//
//	//1 �Ҧ���H���@�ɦP�@���ƾ�
//	//2 �sĶ���q�N���t���s
//	//3 �����i���n��, ���~�i���l�ƾާ@
//	static int m_A;
//
//	//�R�A�����ܶq�]�O���X���v����
//
//private:
//	//static int m_B;
//};
//
//int Person::m_A = 100;
////int Person::m_B = 700;
//
//
//void test01()
//{
//	Person p;
//
//	cout << p.m_A << endl;
//
//	Person p2;
//
//	p2.m_A = 200;
//
//
//	//200
//	cout << p.m_A << endl;
//
//}
//void test02()
//{
//	//�R�A�����ܶq ���ݩ�Y�ӹ�H�W,�Ҧ���H���@�ɦP�@�Ӽƾ�
//	//�]���R�A�����ܶq����سX�ݤ覡
//
//	//1. �q�L��H�i��X��
//	//Person p;
//	//cout << p.m_A << endl;
//
//	//2. �q�L���W�i��X��
//	cout << Person::m_A << endl;
//
//	//cout << Person::m_B << endl; ���~�X�ݤ���p���R�A�����ܶq
//}
//
//
//
//int main()
//{
//	
//	//test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}