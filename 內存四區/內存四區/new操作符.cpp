//#include <iostream>
//using namespace std;
//
////1.new���򥻻y�k
//int* func()
//{
//	//�A��ϳЫؾ㫬�ƾ�
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
//	//��Ϫ��ƾ�,�ѵ{�ǭ��޲z�}�P,�ѵ{�ǭ�����
//	//�p�G�Q�����ϼƾ�,�Q������rdelete
//	delete p;
//	//cout << *p << endl;//���s�w�g�Q����,�A���X�ݴN�O�D�k�ާ@,�|����
//}
//
//
//
////2.�A��ϧQ��new�}�P�Ʋ�
//
//void test02()
//{
//	//�Ы�10�㫬���ƾڼƲ�,�A���
//	int *arr =new int[10];//10�N��Ʋզ�10�Ӥ���
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;//���o10������� 100~109 
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//�����ϼƲ�
//	//����Ʋծ�,�n�ϥ�[]�~�i�H
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