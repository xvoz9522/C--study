//#include <iostream>
//using namespace std;
//
//
////����H�@��������
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		cout << "Phone���c�y��ƽե�" << endl;
//		m_Pname = pName;
//	}
//	~Phone()
//	{
//		cout << "Phone���R�c��ƽե�" << endl;
//	}
//	//~Phone();
//    //����~�P�W�l
//	string m_Pname;
//	//���X
//	
//private:
//
//};
//
//
//
//class Person
//{
//public:
//	//Phone m_Phone = PName �����ഫ�k
//	Person(string name, string PName):m_Name(name),m_Phone(PName)
//	{
//		cout << "Person���c�y��ƽե�" << endl;
//	}
//	~Person()
//	{
//		cout << "Person���R�c��ƽե�" << endl;
//	}
//	//~Person();
//    //�m�W
//	string m_Name;
//	//���
//	Phone m_Phone;
//
//private:
//
//};
//
////���L������H�@��������H,�c�y�ɭԥ��c�y����H,�A�c�y�ۨ�,�R�c�����ǻP�c�y�ۤ�
//
//void test01()
//{
//	Person p("���¼w","sony Grint");
//	cout << p.m_Name << "����" << p.m_Phone.m_Pname << endl;
//}
//
//
//
//
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