//#include <iostream>
//using namespace std;
//
//struct Student
//{
//
//	string name;//名子
//	int age = 0;//年齡
//	int score = 0;//分數
//};
//struct teacher
//{
//	int id = 0;//教師編號
//	string name;//名子 
//	int age = 0;//年齡
//	struct Student stu;//旗下學生
//};
//
//int main()
//{
//	//結構體嵌套結構體
//	//創建老師
//	teacher t;
//	t.id = 10000;
//	t.name = "陳踏郎";
//	t.age = 40;
//	t.stu.name = "徐倫";
//	t.stu.age = 19;
//	t.stu.score = 90;
//	cout << "老師名子: " << t.name << " 老師編號: " << t.id << " 老師年齡: " << t.age
//		<< " 學生名子: " << t.stu.name << " 學生年齡: " << t.stu.age << " 學生分數: " << t.stu.score << endl;
//
//
//
//	system("pause");
//	return 0;
//}