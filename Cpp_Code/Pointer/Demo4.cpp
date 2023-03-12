#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int * p = arr;

    cout << *p << " . " << arr[0] << endl;
    p++;
    cout << *p << " . " << arr[1] << endl;

    return 0;
}
