//#include <iostream>
//using namespace std;
//
////1.�c�y��ƪ������P�ե�
//
////����
////   ���ӰѼƤ���	 �L�Ѻc�y(�q�{�c�y)�M���Ѻc�y
////   ������������  ���q�c�y �����c�y
//class Person
//{
//public:
//	//�c�y���
//	Person()
//	{
//		cout << "Person���L�Ѻc�y��Ƥνե�" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person�����Ѻc�y��Ƥνե�" << endl;
//	}
//	//�����c�y���
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "Person�������c�y��Ƥνե�" << endl;
//	}
//
//
//	//�R�c���
//	~Person()
//	{
//		cout << "Person���R�c��Ƥνե�" << endl;
//	}
//
//	//�ݩ�
//	int age = 0;
//private:
//
//	//int age = 0;
//
//
//};
//
//
//
//
//
////�ե�
//void test01()
//{
//	//1.�A���k
//	//Person p1;//�q�{�c�y��ƽե�
//	//Person p2(10);//���Ѻc�y���
//	//Person p3(p2);//�����c�y���
//
//	//�`�N�ƶ�
//	//�ե��q�{�c�y��Ʈɫ�,���n�[()
//	//�]���U���o��N�X,��Ķ���|�{���O�@�Ө���n��,���|�{���b�Ыع�H
//	//Person p1();
//
//	//void func();
//
//	//cout << "p2���~��: " << p2.age << endl;
//	//cout << "p3���~��: " << p3.age << endl;
//
//	//2.��ܪk
//	//Person P1;
//	//Person P2 = Person(10);//���Ѻc�y
//	//Person P3 = Person(P2); //�����c�y
//	//Person P3 = P2;//�����c�y
//
//	//Person(10);//�ΦW��H �S�I:��e����浲����,�t�η|�ߨ�^���հΦW��H
//	//cout << "aaaaa" << endl;
//
//	//�`�N�ƶ�2
//	//���n�Q�Ϋ����c�y ��l���@�ӰΦW��H �sĶ���|�{�� Person(P3) = Person(P3); ��H�n��
//	//Person(P3);
//
//	//3.�����ഫ�k
//
//	Person P4 = 10; //�۷�� �g�F Person P4 = Person(10); //���Ѻc�y
//	Person P5 = P4; //�����c�y
//	cout << "aaaaa" << endl;
//
//
//}
//
//
//int main()
//{
//
//	test01();
//
//    
//	system("pause");
//	return 0;
//}