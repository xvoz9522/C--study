//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	
//	//�D�R�A�����ܶq �ݩ�������H�W
//	int m_A;
//	//�R�A�����ܶq ���ݩ�������H�W
//	static int m_B;
//	//�D�R�A������� ���ݩ�������H�W
//	void func01() {};
//	//�R�A������� ���ݩ�������H�W
//	static void func02() {};
//
//private:
//
//};
//
//int Person::m_B = 0;
//
//void test01()
//{
//	Person p;
//	//�Ź�H���Τ��s�Ŷ���: 1 �r�`
//	//C++��Ķ���|���C�ӪŹ�H�]���t�@�Ӧr�`�Ŷ�,�O���F�Ϥ��Ź�H�����s��m
//	//�C�ӪŹ�H�]���Ӧ��@�ӿW�@�L�G�����s�a�}
//	cout << "sizeof of a = " << sizeof(p) << endl;
//};
//
//void test02()
//{
//	Person p;
//	cout << "sizeof of a = " << sizeof(p) << endl;
//}
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