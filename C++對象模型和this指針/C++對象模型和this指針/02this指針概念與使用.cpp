//#include <iostream>
//using namespace std;
//
////1 �ѨM�W�ٽĬ�
//
////2 ��^��H������*this
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//this���w���V�Q�եΪ�������Ʃ��ݪ���H
//		this->age = age;
//	}
//	Person& PersonAddAGE(Person &p)
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
//	Person p1(10);
//	Person p2(20);
//	cout <<"p1���~�֬��h��: " << p1.age << endl;
//	cout << "p2���~�֬��h��: " << p2.age << endl;
//	//p2.PersonAddAGE(p1);
//
//}
////2 ��^��H������*this
//void test02()
//{
//	Person p1(17);
//	cout << "p1���~�֬��h��: " << p1.age << endl;
//	Person p2(p1);
//	cout << "p2���~�֬��h��: " << p2.age << endl;
//	//�妡�s����Q
//	p2.PersonAddAGE(p1).PersonAddAGE(p1).PersonAddAGE(p1);
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