//#include <iostream>
//using namespace std;
//
////函數重載的注意事項
////1.引用作為重載的條件
//void func(int &a)// int &a = 10;不合法因為是常量
//{
//	cout << "func(int &a)調用" << endl;
//}
//
//void func(const int& a)//const int &a = 10合法因為是常量
//{
//	cout << "func(const int& a)調用" << endl;
//}
//
//
////2.函數重載碰到默認參數
//void func2(int a,int b = 10)
//{
//	cout << "func2(int a)調用" << endl;
//}
//
//void func2(int a)
//{
//	cout << "func2(int a)調用" << endl;
//}
//
//
//int main()
//{
//
//	//int a = 10;
//	//func(a);//調用無const的
//
//	//func(10);//調用有const的
//
//	func2(10,20); //當函數重載碰到默認參數,出現二異性,報錯,盡量避免這樣情況
//
//	system("pause");
//	return 0;
//}