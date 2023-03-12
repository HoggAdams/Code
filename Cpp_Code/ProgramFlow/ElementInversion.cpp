#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;

    cout << "修改前的数组为: ";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i];
    }
    cout << endl;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    
    cout << "修改后的数组为: ";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i];
    }
    cout << endl;
}