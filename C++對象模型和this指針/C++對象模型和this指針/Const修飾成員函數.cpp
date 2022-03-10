#include <iostream>
using namespace std;

//常函數
class Person
{
public:
	//this指針的本質 是指針常量 指針的指向是不可以修改的
	//Person(類) *const this = this指針;
	//在成員函數後面加const,修飾的是this指針,讓指針的值無法修改
	void ShowPerson()const
	{
	    this->m_B = 200;
		//this ->m_A = 100;
		//this = NULL;//this指針不可以修改指針的指向的

	}
	
	int m_A;
	mutable int m_B; //特殊變量,即使在長函數中,也可以修改這個值,加上關鍵字mutable

private:

};
void test01()
{
	Person p;
	p.ShowPerson();
}

//常對象


int main()
{

	system("pause");
	return 0;
}