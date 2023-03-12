#include <iostream>
using namespace std;

int max(int a, int b);

int main()
{
    int num = max(1, 2);
    cout << num << endl;

    return 0;
}

int max(int a, int b)
{
    return a > b ? a : b;
}