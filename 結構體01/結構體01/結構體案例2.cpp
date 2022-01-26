//#include <iostream>
//using namespace std;
//
////英雄結構體
//struct Hero
//{
//	//姓名
//	string name;
//	//年齡
//	int age;
//	//性別
//	string sex;
//};
//
////冒泡排序
//
//void boubleSort(Hero heroArr[], int len)
//{
//	for (int i = 0; i < len -1; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			//如果j下標的元素年齡 大於 j+1下標的年齡,交換兩個元素
//			if (heroArr[j].age>heroArr[j+1].age)
//			{
//				struct Hero temp = heroArr[j];
//				heroArr[j] = heroArr[j + 1];
//				heroArr[j + 1] = temp;
//			}
//		}
//	}
//}
////打印排序後數組中的訊息
//void printHero(struct Hero heroArr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "姓名: " << heroArr[i].name << " 年齡: " << heroArr[i].age << " 性別: " << heroArr[i].sex << endl;
//	}
//}
//
//int main()
//{
//	//1.設計英雄結構體
//
//	//2.創建數組存放5名英雄
//	struct Hero heroArr[5]
//	{
//		{"劉備",23,"男"},
//		{"關羽",22,"男"},
//		{"張飛",20,"男"},
//		{"趙雲",21,"男"},
//		{"貂禪",19,"女"}
//	};
//
//	int len = sizeof(heroArr) / sizeof(heroArr[0]);
//	cout << "排序前:" << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout << "姓名: " << heroArr[i].name << " 年齡: " << heroArr[i].age << " 性別: " << heroArr[i].sex << endl;
//	}
//
//
//	//3.對數組進行排序,按照年齡進行順序排列
//	boubleSort(heroArr, len);
//	//4.將排列後結果打印輸出
//	cout << "排序後:" << endl;
//	printHero(heroArr,len);
//	
//	system("pause");
//	return 0;
//}