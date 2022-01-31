//#include <iostream>
//using namespace std;
//
////棧區數據注意事項 --- 不要返回局部變量地區的地址
////棧區的數據是由編輯器開闢和釋放,存放函數的參數值,局部變量等
//int* func(int b)//形參數據也會放在棧區
//{
//	b = 100;
//	int a = 10;//局部變量 存放在棧區 棧區的數據在函數執行完後自動釋放
//	return &a;//返回局部變量地址
//}
//
//
//int main()
//{
//	//接收func的函數返回值
//	int* p = func(1);
//
//	cout << *p << endl;//第一次可以保留正確的數字 是因為編譯器做了保留
//	cout << *p << endl;//第二次這個數據就不會保留
//
//	system("pause");
//	return 0;
//}