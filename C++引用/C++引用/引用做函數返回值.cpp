//#include <iostream>
//using namespace std;
//
////�ޥΰ���ƪ���^��
////1.���n��^�����ܶq���ޥ�
//int& test01()
//{
//	int a = 10;//�����ܶq�s��b���s�|�Ϫ� �̰�
//	return a;
//}
//
//
////2.��ƪ��եΥi�H��������
//int& test02()
//{
//	static int a = 10;//�R�A�ܶq,�s��b������,�����ϤW���ƾڦb�b�{�ǵ�����t������
//	return a;
//}
//
//int main()
//{
//	//int& ref = test01();
//
//	//cout << ref << endl;//�Ĥ@�����G���T,�O�]���s�X�����F�O�d
//	//cout << ref << endl;//�ĤG�����G���~,�O�]��a�����s�w�Q����
//	int& ref2 = test02();
//	cout << ref2 << endl;
//	cout << ref2 << endl;
//	test02() = 900;//�p�G��ƪ���^�ȬO�ޥ�,�o�Ө�ƽեΥi�H��������
//	cout << ref2 << endl;
//
//	system("pause");
//	return 0;
//}