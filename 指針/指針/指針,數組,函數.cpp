//#include <iostream>
//using namespace std;
//
////�_�w�ƧǨ��  �Ѽ�1 �Ʋխ��a�} �Ѽ�2 �Ʋժ���
//void bubbleSolt(int *arr, int len)
//{
//	for ( int i = 0; i < len - 1 ; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			//�p�Gj > j+1���� ,�洫�Ʀr
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
//	//1,�ЫؼƲ�
//	int arr[10] = { 5,2,3,7,6,8,1,4,9,10 };
//	//�Ʋժ���
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//2,�Ыب��,��{�_�w�Ƨ�
//	bubbleSolt(arr,len);
//	//3,���L�Ƨǫ᪺�Ʋ�
//	printArray(arr, len);
//	
//	system("pause");
//	return 0;
//}