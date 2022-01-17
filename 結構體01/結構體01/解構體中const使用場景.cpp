//#include <iostream>
//using namespace std;
////const使用場景
//struct student
//{
//	//姓名
//	string name;
//	//年齡
//	int age;
//	//分數
//	int score;
//};
//
////將函數中的形參改為指針 , 可以減少內存 , 而且不會複製一個新的副本出來
//void printStudent(const student* s)
//{
//	//s->age = 150; //加入const之後,一旦有修改的操作就會報錯,可以防止我們的誤操作
//	cout << "姓名: " << s->name << " 年齡: " << s->age << " 分數: " << s->score << endl;
//}
//
//int main()
//{
//	//創建結構體變量
//	struct student s = { "張三" , 16 , 80 };
//
//	//通過函數改變結構體變量訊息
//	printStudent(&s);
//
//	cout << "main裡張三的年齡: " << s.age << endl;
//	system("pause");
//	return 0;
//}