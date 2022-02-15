//#include <iostream>
//using namespace std;
//
//class C1
//{
//	int m_a = 0;// 默認權限 私有
//
//};
//
//struct C2
//{
//	int m_a = 0;// 默認權限 公共
//};
//
//
//
//int main()
//{
//	//class和struct區別
//	//struct 默認權限是 公共 public
//	//class 默認權限是 私有 private
//
//	C1 c1;
//	//c1.m_a = 100;//calss 默認權限是私有的 因此不可以訪問
//
//	C2 c2;
//	c2.m_a = 100;
//	cout << c2.m_a << endl;//struct 默認權限是公共的 因此可以訪問
//
//	system("pause");
//	return 0;
//}