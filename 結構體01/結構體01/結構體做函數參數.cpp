//#include <iostream>
//using namespace std;
////�w�q�ǥ͵��c��
//struct Student
//{
//	//�����C��
//	string name;//�m�W
//	int age = 0;//�~��
//	int score = 0;//����
//};
////���L�ǥͫH�����
////1.�ȶǻ�
//void printStudent1(Student std)
//{
//	std.age = 16;
//	cout << "�l��� �m�W: " << std.name << " �l��� �~��: " << std.age << " �l��� ����: " << std.score << endl;
//}
////2.�a�}�ǻ�
//void printStudent2(Student * std)
//{
//	std->age = 20;
//	cout << "�l���2 �m�W: " << std->name << " �l���2 �~��: " << std->age << " �l���2 ����: " << std->score << endl;
//}
//int main()
//{
//	//���c�鰵��ưѼ�
//	//�N�ǥͶǤJ��@�ӰѼƤ�,���L�ǥͪ��H��
//
//	//�Ыص��c���ܶq
//	struct Student std;
//	std.name = "�p�_";
//	std.age = 17;
//	std.score = 90;
//
//	//printStudent1(std);
//	printStudent2(&std);
//	//cout << "�bmain�����L�����G �m�W: " << std.name << " main�~��: " << std.age << " main����: " << std.score << endl;
//
//	system("pause");
//	return 0;
//}