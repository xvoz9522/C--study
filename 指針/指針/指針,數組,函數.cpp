//#include <iostream>
//using namespace std;
//
////玙獁逼ㄧ计  把计1 计舱 把计2 计舱
//void bubbleSolt(int *arr, int len)
//{
//	for ( int i = 0; i < len - 1 ; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			//狦j > j+1 ,ユ传计
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void printArray(int* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//
//int main()
//{
//	//1,承计舱
//	int arr[10] = { 5,2,3,7,6,8,1,4,9,10 };
//	//计舱
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//2,承ㄧ计,龟瞷玙獁逼
//	bubbleSolt(arr,len);
//	//3,ゴ逼计舱
//	printArray(arr, len);
//	
//	system("pause");
//	return 0;
//}