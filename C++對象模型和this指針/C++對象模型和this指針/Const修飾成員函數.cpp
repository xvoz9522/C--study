#include <iostream>
using namespace std;

//�`���
class Person
{
public:
	//this���w������ �O���w�`�q ���w�����V�O���i�H�ק諸
	//Person(��) *const this = this���w;
	//�b������ƫ᭱�[const,�׹����Othis���w,�����w���ȵL�k�ק�
	void ShowPerson()const
	{
	    this->m_B = 200;
		//this ->m_A = 100;
		//this = NULL;//this���w���i�H�ק���w�����V��

	}
	
	int m_A;
	mutable int m_B; //�S���ܶq,�Y�Ϧb����Ƥ�,�]�i�H�ק�o�ӭ�,�[�W����rmutable

private:

};
void test01()
{
	Person p;
	p.ShowPerson();
}

//�`��H


int main()
{

	system("pause");
	return 0;
}