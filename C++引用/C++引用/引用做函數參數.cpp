//#include <iostream>
//using namespace std;
//
////�洫���
//
////1.�ȶǻ�
//void myswap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "swap01a = " << a << " swap02b = " << b << endl;
//}
////2.�a�}�ǻ�
//void myswap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////3.�ޥζǻ�
//void myswap03(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//myswap01(a, b);//�ȶǻ� , �ΰѤ��|�׹����
//	//myswap02(&a, &b);//�a�}�ǻ�,�ΰѷ|�׹����
//	myswap03(a, b);//�ޥζǻ�,�ΰѷ|�׹����
//	cout << "a = " << a << " b = " << b << endl;
//
//
//	system("pause");
//	return 0;
//}