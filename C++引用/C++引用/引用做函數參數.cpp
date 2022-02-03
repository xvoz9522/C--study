//#include <iostream>
//using namespace std;
//
////交換函數
//
////1.值傳遞
//void myswap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "swap01a = " << a << " swap02b = " << b << endl;
//}
////2.地址傳遞
//void myswap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////3.引用傳遞
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
//	//myswap01(a, b);//值傳遞 , 形參不會修飾實參
//	//myswap02(&a, &b);//地址傳遞,形參會修飾實參
//	myswap03(a, b);//引用傳遞,形參會修飾實參
//	cout << "a = " << a << " b = " << b << endl;
//
//
//	system("pause");
//	return 0;
//}