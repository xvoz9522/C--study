//#include <iostream>
//using namespace std;
////const�ϥγ���
//struct student
//{
//	//�m�W
//	string name;
//	//�~��
//	int age;
//	//����
//	int score;
//};
//
////�N��Ƥ����ΰѧאּ���w , �i�H��֤��s , �ӥB���|�ƻs�@�ӷs���ƥ��X��
//void printStudent(const student* s)
//{
//	//s->age = 150; //�[�Jconst����,�@�����ק諸�ާ@�N�|����,�i�H����ڭ̪��~�ާ@
//	cout << "�m�W: " << s->name << " �~��: " << s->age << " ����: " << s->score << endl;
//}
//
//int main()
//{
//	//�Ыص��c���ܶq
//	struct student s = { "�i�T" , 16 , 80 };
//
//	//�q�L��Ƨ��ܵ��c���ܶq�T��
//	printStudent(&s);
//
//	cout << "main�̱i�T���~��: " << s.age << endl;
//	system("pause");
//	return 0;
//}