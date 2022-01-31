//#include <iostream>
//using namespace std;
//
//int * func()
//{
//    //利用new這個關鍵字,可以把數據開闢到堆區
//	//指針,本質還是局部變量,放在棧區,指針保存的數據是放在堆區
//	int * p = new int(10);
//	return p;
//}
//
//int main()
//{
//	//在堆區開闢數字
//	int* p = func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//
//	system("pause");
//	return 0;
//}