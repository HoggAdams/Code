#include <iostream>
using namespace std;

int main()
{
    // 九九乘法表
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "*" << i << "=" << j * i << "\t";
        }
        cout << endl;
    }
}