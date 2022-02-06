//#include <iostream>
//using namespace std;
//
////打印數據函數
//void ShowValue(const int &val)
//{
//	//val = 1000;
//	cout << "val = " << val << endl;
//}
//
//
//int main()
//{
//	//常量引用
//	//使用場景,用來修飾形參,防止誤操作
//	//int a = 10;
//
//	//加上const之後,編譯器將代碼修改 int temp = 10; const int & ref = temp;
//	//const int& ref = 10;//引用必須引用一塊合法的內存空間
//	//ref = 20;//加入const以後便為只讀,不可以修改
//
//	int a = 100;
//
//	ShowValue(a);
//
//	cout << "a = " << a << endl;
//
//	system("pause");
//	return 0;
//}