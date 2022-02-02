//#include <iostream>
//using namespace std;
//
////1.new的基本語法
//int* func()
//{
//	//再堆區創建整型數據
//	int * p = new int(10);
//	return p;
//}
//
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	//堆區的數據,由程序員管理開闢,由程序員釋放
//	//如果想釋放堆區數據,利用關鍵字delete
//	delete p;
//	//cout << *p << endl;//內存已經被釋放,再次訪問就是非法操作,會報錯
//}
//
//
//
////2.再堆區利用new開闢數組
//
//void test02()
//{
//	//創建10整型的數據數組,再堆區
//	int *arr =new int[10];//10代表數組有10個元素
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;//給這10元素賦值 100~109 
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//釋放堆區數組
//	//釋放數組時,要使用[]才可以
//	delete [] arr;
//}
//
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}