//#include <iostream>
//using namespace std;
//
////�����ܶq
//int ga = 10;
//int gb = 10;
//
////const�׹��������ܶq,�����`�q
//const int cga = 10;
//const int cgb = 10;
//
//int main()
//{
//	//������
//
//	//�����ܶq,�R�A�ܶq,�`�q
//
//	//�Ыا����ܶq
//	int a = 10;
//	int b = 10;
//	cout << "�����ܶqa���a�}��" << (int)&a << endl;
//	cout << "�����ܶqb���a�}��" << (int)&b << endl;
//
//	cout << "�������ܶqga���a�}��" << (int)&ga << endl;
//	cout << "�������ܶqgb���a�}��" << (int)&gb << endl;
//
//	//�R�A�ܶq �b���q�ܶq�e���[static �ݩ��R�A�ܶq
//	static int sa = 10;
//	static int sb = 10;
//	cout << "�R�A�ܶqsa���a�}��" << (int)&sa << endl;
//	cout << "�R�A�ܶqsb���a�}��" << (int)&sb << endl;
//
//	//�`�q
//	//�r�Ŧ�`�q
//	cout << "�r�Ŧ�`�q���a�}��" << (int)&"Hello World" << endl;
//
//	//const�׹����ܶq
//	//const�׹��������ܶq,const�׹��������ܶq
//
//	cout << "�����`�q,cga���a�}��: " << (int)&cga << endl;
//	cout << "�����`�q,cgb���a�}��: " << (int)&cgb << endl;
//
//	const int clc = 10; //c = const g = global l = local
//	const int cld = 10;
//
//	cout << "�����`�q,cgc���a�}��: " << (int)&clc << endl;
//	cout << "�����`�q,cgd���a�}��: " << (int)&cld << endl;
//
//	system("pause");
//	return 0;
//}