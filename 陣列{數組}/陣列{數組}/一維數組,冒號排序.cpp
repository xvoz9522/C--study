#include <iostream>
using namespace std;
int main() {

	int arr[9] = { 1,8,3,2,4,5,7,9,6 };
	cout << "逼玡:" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//羆逼近计:じ计-1
	for (int i = 0; i < 9 - 1; i++)
	{
		//ず碻吏癸ゑ Ω计 = じ计-讽玡近计 -1 
		for (int a = 0; a < 9 - i - 1; a++)
		{
			if(arr[a] > arr[a+1]) {
				int temp = arr[a];
				arr[a] = arr[a + 1];
				arr[a + 1] = temp;
			}

		}
	}
	cout << "逼 " << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	cin.get();
	return 0;
}