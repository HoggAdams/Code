#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {300, 350, 200, 400, 250};
    int recode = arr[0];
    for (int i = 1; i < 5; i++)
    {
        recode = recode > arr[i] ? recode : arr[i];
    }
    cout << "最重的小猪体重为: " << recode << "kg" << endl;
}