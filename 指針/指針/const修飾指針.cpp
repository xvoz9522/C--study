//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//	//1.const�׹����w �`�q���w
//	int a = 10;
//	int b = 10;
//
//	const int* p = &a;
//	//���w���V���Ȥ��i�H��,���w�����V�i�H��
//	//*p = 20; ���~
//	p = &b;//���T
//
//	//2.const�׹����q ���w�`�q
//	//���w�����V���i�H��,�ȥi�H��
//	int* const p2 = &a;
//	*p2 = 100;//���T
//	//p2 = &b;//���~,���w�����V���i�H��
//
//	//3.const�׹����w�M�`�q
//
//	const int * const p3 = &a;
//	//���w���ȩM���w����V�����i�H��
//	//*p3 = 100;// ���~
//	//p3 = &b;//���~
//	system("pause");
//	return 0;
//}