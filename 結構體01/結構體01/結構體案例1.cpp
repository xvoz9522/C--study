//#include <iostream>
//#include <ctime>
//using namespace std;
////�ǥ͵��c��
//struct Student
//{
//	//�ǥͩm�W
//	string sname;
//	//����
//	int score = 0;
//};
////�Ѯv���c��
//struct teacher
//{
//	//�m�W
//	string tname;
//	//�޲z�ǥ�
//	Student Stuarr[5] ;
//};
//
////���Ѯv�M�ǥͽ�¾�����
//void allocatspace(teacher tarr[], int len)
//{
//	string nameseed  = "ABCDE";
//
//	//���Ѯv���
//	for (int i = 0; i < len; i++)
//	{
//		tarr[i].tname = "teacher_";
//		tarr[i].tname += nameseed[i];
//		//�q�L�`�����C��ǥͽ��
//		for (int j = 0; j < 5; j++)
//		{
//			tarr[i].Stuarr[j].sname = "Student_";
//			tarr[i].Stuarr[j].sname += nameseed[j];
//
//			int random = rand() % 101;//0~99
//
//			tarr[i].Stuarr[j].score = random;
//		}
//	}
//}
////���L�Ҧ��T�������
//void printInfo(teacher tarr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "�Ѯv�m�W: " << tarr[i].tname << endl;
//
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t�ǥͩm�W: " << tarr[i].Stuarr[j].sname <<
//				" �ǥͤ���: " << tarr[i].Stuarr[j].score << endl;
//		}
//	}
//}
//
//int main()
//{
//	//�H���ƺؤl
//	srand((unsigned int)time(NULL));
//	//1.3�W�Ѯv���Ʋ�
//	teacher tarr[3];
//	//2.�q�L��Ƶ��Ѯv��ȩM�X�U�ǥ�
//	int len = sizeof(tarr) / sizeof(tarr[0]);
//	allocatspace(tarr,len);
//	//3.���L�Ҧ��Ѯv�M�ǥ�
//	printInfo(tarr,len);
//	system("pause");
//	return 0;
//}