//#include <iostream>
//using namespace std;
//
////創作學生數據類型 :學生包含(姓名,年齡,分數)
////自訂意數據類型,一些類型集合組合的一個類型
////語法 struct 類型名稱 { 成員類表 }
//struct Student
//{
//	//成員列表
//
//	//姓名
//	string name;
//	//年齡
//	int age = 0;
//	//分數
//	int score = 0;
//}s3,s4;//順便創建結構體變量
////2.通過學生類型創建具體學生
//
//
//int main()
//{
//
////2.1 struct Student s1
//	//struct關鍵字可以省略
//	Student s1;
//	//給屬性附值,通過.訪問結構體變量中的屬性
//	s1.name = "張三";
//	s1.age = 18;
//	s1.score = 70;
//
//	cout << " 姓名 " << s1.name << " 年齡 " << s1.age << " 分數 " << s1.score << endl;
//
////2.2 struct Student s2 = { ... }
//	struct Student s2 = { "立四", 16 , 80 };
//
//	cout << " 姓名 " << s2.name << " 年齡 " << s2.age << " 分數 " << s2.score << endl;
////2.3 在定義結構體時順便創建結構體變量
//	s3.name = "王武";
//	s3.age = 20;
//	s3.score = 100;
//	cout << " 姓名 " << s3.name << " 年齡 " << s3.age << " 分數 " << s3.score << endl;
//
//	s4.name = "陳六";
//	s4.age = 21;
//	s4.score = 99;
//	cout << " 姓名 " << s4.name << " 年齡 " << s4.age << " 分數 " << s4.score << endl;
//
//	system("pause");
//	return 0;
//}