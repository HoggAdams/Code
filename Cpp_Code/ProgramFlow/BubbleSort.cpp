#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int j = 0;
    cout << "修改前为: ";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i];
    }
    cout << endl;
    while (j < sizeof(arr) / sizeof(arr[0]) -1)
    {
        for (int i = 1; i <= sizeof(arr) / sizeof(arr[0]); i++)
        {
            if (arr[i] < arr[i-1])
            {
                int temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
            }
        }
        j++;
    }
    cout << "修改后为: ";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i];
    }
    cout << endl;
}