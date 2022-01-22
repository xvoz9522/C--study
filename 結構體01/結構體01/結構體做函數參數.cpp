//#include <iostream>
//using namespace std;
////定義學生結構體
//struct Student
//{
//	//成員列表
//	string name;//姓名
//	int age = 0;//年齡
//	int score = 0;//分數
//};
////打印學生信息函數
////1.值傳遞
//void printStudent1(Student std)
//{
//	std.age = 16;
//	cout << "子函數 姓名: " << std.name << " 子函數 年齡: " << std.age << " 子函數 分數: " << std.score << endl;
//}
////2.地址傳遞
//void printStudent2(Student * std)
//{
//	std->age = 20;
//	cout << "子函數2 姓名: " << std->name << " 子函數2 年齡: " << std->age << " 子函數2 分數: " << std->score << endl;
//}
//int main()
//{
//	//結構體做函數參數
//	//將學生傳入到一個參數中,打印學生的信息
//
//	//創建結構體變量
//	struct Student std;
//	std.name = "小寶";
//	std.age = 17;
//	std.score = 90;
//
//	//printStudent1(std);
//	printStudent2(&std);
//	//cout << "在main中打印的結果 姓名: " << std.name << " main年齡: " << std.age << " main分數: " << std.score << endl;
//
//	system("pause");
//	return 0;
//}