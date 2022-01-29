//#include <iostream>
//using namespace std;
//
////全局變量
//int ga = 10;
//int gb = 10;
//
////const修飾的全局變量,全局常量
//const int cga = 10;
//const int cgb = 10;
//
//int main()
//{
//	//全局區
//
//	//全局變量,靜態變量,常量
//
//	//創建局部變量
//	int a = 10;
//	int b = 10;
//	cout << "局部變量a的地址為" << (int)&a << endl;
//	cout << "局部變量b的地址為" << (int)&b << endl;
//
//	cout << "全局部變量ga的地址為" << (int)&ga << endl;
//	cout << "全局部變量gb的地址為" << (int)&gb << endl;
//
//	//靜態變量 在普通變量前面加static 屬於靜態變量
//	static int sa = 10;
//	static int sb = 10;
//	cout << "靜態變量sa的地址為" << (int)&sa << endl;
//	cout << "靜態變量sb的地址為" << (int)&sb << endl;
//
//	//常量
//	//字符串常量
//	cout << "字符串常量的地址為" << (int)&"Hello World" << endl;
//
//	//const修飾的變量
//	//const修飾的全局變量,const修飾的局部變量
//
//	cout << "全局常量,cga的地址為: " << (int)&cga << endl;
//	cout << "全局常量,cgb的地址為: " << (int)&cgb << endl;
//
//	const int clc = 10; //c = const g = global l = local
//	const int cld = 10;
//
//	cout << "局部常量,cgc的地址為: " << (int)&clc << endl;
//	cout << "局部常量,cgd的地址為: " << (int)&cld << endl;
//
//	system("pause");
//	return 0;
//}