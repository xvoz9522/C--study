//#include <iostream>
//using namespace std;
//
////�R�A�������
////�Ҧ���H���@�ɦP�@�Ө��
////�R�A������ƥu��X���R�A�����ܶq
//
//class Person
//{
//public:
//	//�R�A�������
//	static void func()
//	{
//		m_A = 100;//�R�A������ƥi�H�X���R�A�����ܶq
//		//m_B = 200;//�R�A������ƬO ���i�H�X�� �D�R�A�����ܶq,�L�k�Ϥ��쩳�O���ӹ�H��m_B�ݩ�
//		cout << "static void func�ե�" << m_A << endl;
//	};
//
//	static int m_A;//�R�A�����ܶq
//	int m_B;//�D�R�A�����ܶq
//
//	//�R�A������Ƥ]�O���X���v����
//private:
//	static void func02()
//	{
//		cout << "static void func02�ե�" << endl;
//	}
//
//};
//
//int Person::m_A = 0;
//
////����سX�ݤ覡
//void test01()
//{
//	//1.�q�L��H�i��X��
//	Person p;
//	p.m_B = 100;
//	p.func();
//
//	//2.�q�L���W�i��X��
//	Person::func();
//
//	//Person::func02(); ���~�X�ݤ���p�����R�A�������
//
//	
//};
//
//
//int main()
//{
//
//	test01();
//	
//
//	system("pause");
//	return 0;
//}