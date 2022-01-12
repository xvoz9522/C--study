//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//	//1.const修飾指針 常量指針
//	int a = 10;
//	int b = 10;
//
//	const int* p = &a;
//	//指針指向的值不可以改,指針的指向可以改
//	//*p = 20; 錯誤
//	p = &b;//正確
//
//	//2.const修飾長量 指針常量
//	//指針的指向不可以改,值可以改
//	int* const p2 = &a;
//	*p2 = 100;//正確
//	//p2 = &b;//錯誤,指針的指向不可以改
//
//	//3.const修飾指針和常量
//
//	const int * const p3 = &a;
//	//指針的值和指針的方向都不可以改
//	//*p3 = 100;// 錯誤
//	//p3 = &b;//錯誤
//	system("pause");
//	return 0;
//}