#include <iostream>
using namespace std;

//1.�c�y��ƪ������P�ե�

//����
class Person
{
public:
	//�c�y���
	Person()
	{
		cout << "Person���c�y��Ƥνե�" << endl;
	}
	//�R�c���
	~Person()
	{
		cout << "Person���R�c��Ƥνե�" << endl;
	}

private:

};

Person::Person()
{
}

Person::~Person()
{
}


int main()
{

}