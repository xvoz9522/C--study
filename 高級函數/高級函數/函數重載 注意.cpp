//#include <iostream>
//using namespace std;
//
////��ƭ������`�N�ƶ�
////1.�ޥΧ@������������
//void func(int &a)// int &a = 10;���X�k�]���O�`�q
//{
//	cout << "func(int &a)�ե�" << endl;
//}
//
//void func(const int& a)//const int &a = 10�X�k�]���O�`�q
//{
//	cout << "func(const int& a)�ե�" << endl;
//}
//
//
////2.��ƭ����I���q�{�Ѽ�
//void func2(int a,int b = 10)
//{
//	cout << "func2(int a)�ե�" << endl;
//}
//
//void func2(int a)
//{
//	cout << "func2(int a)�ե�" << endl;
//}
//
//
//int main()
//{
//
//	//int a = 10;
//	//func(a);//�եεLconst��
//
//	//func(10);//�եΦ�const��
//
//	func2(10,20); //���ƭ����I���q�{�Ѽ�,�X�{�G����,����,�ɶq�קK�o�˱��p
//
//	system("pause");
//	return 0;
//}