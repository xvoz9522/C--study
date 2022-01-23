//#include <iostream>
//#include <ctime>
//using namespace std;
////學生結構體
//struct Student
//{
//	//學生姓名
//	string sname;
//	//分數
//	int score = 0;
//};
////老師結構體
//struct teacher
//{
//	//姓名
//	string tname;
//	//管理學生
//	Student Stuarr[5] ;
//};
//
////給老師和學生賦職的函數
//void allocatspace(teacher tarr[], int len)
//{
//	string nameseed  = "ABCDE";
//
//	//給老師賦值
//	for (int i = 0; i < len; i++)
//	{
//		tarr[i].tname = "teacher_";
//		tarr[i].tname += nameseed[i];
//		//通過循環給每位學生賦值
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
////打印所有訊息的函數
//void printInfo(teacher tarr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老師姓名: " << tarr[i].tname << endl;
//
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t學生姓名: " << tarr[i].Stuarr[j].sname <<
//				" 學生分數: " << tarr[i].Stuarr[j].score << endl;
//		}
//	}
//}
//
//int main()
//{
//	//隨機數種子
//	srand((unsigned int)time(NULL));
//	//1.3名老師的數組
//	teacher tarr[3];
//	//2.通過函數給老師賦值和旗下學生
//	int len = sizeof(tarr) / sizeof(tarr[0]);
//	allocatspace(tarr,len);
//	//3.打印所有老師和學生
//	printInfo(tarr,len);
//	system("pause");
//	return 0;
//}