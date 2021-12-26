//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//1.定義指針
//	int a = 10;
//	//指針定義的語法: 數據類型 * 指針變量名;
//	int * p;
//	//讓指針紀錄變量a的地址
//	p = &a;
//	cout << "a的地址為 = " << &a << endl;
//	cout << "指針p為: "  << p << endl;
//	//2.使用指針
//	//可以用解引用的方式來找到指針指向的內存
//	//指針前加 * 代表解引用,找到指針指向的內存中的數據
//	*p = 900;
//	cout << "a = " << a << endl;
//	cout << "*p = " << *p << endl;
//	system("pause");
//	return 0;
//}