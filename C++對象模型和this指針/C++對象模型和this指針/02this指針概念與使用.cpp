//#include <iostream>
//using namespace std;
//
////1 �ѨM�W�ٽĬ�
//
////2 ��^��H������*this
//
//class person
//{
//public:
//	person(int age)
//	{
//		//this���w���V�Q�եΪ�������Ʃ��ݪ���H
//		this->age = age;
//	}
//	person& personaddage(person &p)
//	{
//		this->age += p.age;
//		//this���Vp2�����w ,��*this���V���N�Op2�o�ӹ�H����
//		return *this;
//	}
//
//
//	int age;
//private:
//
//};
//
////1 �ѨM�W�ٽĬ�
//void test01()
//{
//	person p1(10);
//	person p2(20);
//	cout <<"p1���~�֬��h��: " << p1.age << endl;
//	cout << "p2���~�֬��h��: " << p2.age << endl;
//	//p2.personaddage(p1);
//
//}
////2 ��^��H������*this
//void test02()
//{
//	person p1(17);
//	cout << "p1���~�֬��h��: " << p1.age << endl;
//	person p2(p1);
//	cout << "p2���~�֬��h��: " << p2.age << endl;
//	//�妡�s����Q
//	p2.personaddage(p1).personaddage(p1).personaddage(p1);
//	cout << "p2���~�֬��h��: " << p2.age << endl;
//}
//
//int main()
//{
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}