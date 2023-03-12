#include <iostream>
using namespace std;

void bubbleSort(int * arr, int len);

int main()
{
	int arr[] = {1, 3, 6, 4, 8, 2, 5};
	bubbleSort(arr, 7);
	cout << "arr = ";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i];
	}
	cout << endl;

	return 0;
}

void bubbleSort(int * arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1- i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}	
	}
}
