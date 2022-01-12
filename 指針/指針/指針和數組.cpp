//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//指針和數組
//	//利用指針訪問數組中的元素
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	cout << "第一個元素: " << arr[0] << endl;
//
//	int* p = arr;//arr就是數組的首地址
//
//	cout << "利用指針訪問第一個元素: " << *p << endl;
//
//	p++;//讓指針偏移四個字節
//
//	cout << "利用指針訪問第二個元素: " << *p << endl;
//
//	cout << "利用指針遍地數組" << endl;
//
//	int* p2 = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		/*cout << arr[i] << endl;*/
//		cout << *p2 << endl;
//		p2++;
//	}
//
//	system("pause");
//    return 0;
//}