//#include <iostream>
//using namespace std;
//
////1.構造函數的分類與調用
//
////分類
////   按照參數分類	 無參構造(默認構造)和有參構造
////   按照類型分類  普通構造 拷貝構造
//class Person
//{
//public:
//	//構造函數
//	Person()
//	{
//		cout << "Person的無參構造函數及調用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person的有參構造函數及調用" << endl;
//	}
//	//拷貝構造函數
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "Person的拷貝構造函數及調用" << endl;
//	}
//
//
//	//析構函數
//	~Person()
//	{
//		cout << "Person的析構函數及調用" << endl;
//	}
//
//	//屬性
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
////調用
//void test01()
//{
//	//1.括號法
//	//Person p1;//默認構造函數調用
//	//Person p2(10);//有參構造函數
//	//Person p3(p2);//拷貝構造函數
//
//	//注意事項
//	//調用默認構造函數時後,不要加()
//	//因為下面這行代碼,邊譯器會認為是一個函數聲明,不會認為在創建對象
//	//Person p1();
//
//	//void func();
//
//	//cout << "p2的年齡: " << p2.age << endl;
//	//cout << "p3的年齡: " << p3.age << endl;
//
//	//2.顯示法
//	//Person P1;
//	//Person P2 = Person(10);//有參構造
//	//Person P3 = Person(P2); //拷貝構造
//	//Person P3 = P2;//拷貝構造
//
//	//Person(10);//匿名對象 特點:當前行執行結束後,系統會立刻回收調匿名對象
//	//cout << "aaaaa" << endl;
//
//	//注意事項2
//	//不要利用拷貝構造 初始劃一個匿名對象 編譯器會認為 Person(P3) = Person(P3); 對象聲明
//	//Person(P3);
//
//	//3.隱式轉換法
//
//	Person P4 = 10; //相當於 寫了 Person P4 = Person(10); //有參構造
//	Person P5 = P4; //拷貝構造
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