#include <iostream>
#include "swap.h"
using namespace std;

//��ӼƦr�洫�����
////����n�� 
//void swap(int a, int b);
//��Ʃw�q
//void swap(int a,int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//1.�Ы�.h���Y���
//2.�Ы�.cpp������
//3.�b�Y���ϥΨ���n��
//4.�b����ϥΨ�Ʃw�q

int main()
{
	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");
	return 0;
}