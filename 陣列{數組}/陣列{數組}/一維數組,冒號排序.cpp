#include <iostream>
using namespace std;
int main() {

	int arr[9] = { 1,8,3,2,4,5,7,9,6 };
	cout << "�Ƨǫe:" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//�`�@�ƧǪ����Ƭ�:�����Ӽ�-1
	for (int i = 0; i < 9 - 1; i++)
	{
		//�����`����� ���� = �����Ӽ�-��e���� -1 
		for (int a = 0; a < 9 - i - 1; a++)
		{
			if(arr[a] > arr[a+1]) {
				int temp = arr[a];
				arr[a] = arr[a + 1];
				arr[a + 1] = temp;
			}

		}
	}
	cout << "�Ƨǫ� " << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	cin.get();
	return 0;
}