#include <iostream>
using namespace std;

int main()
{
    // 赋值运算符
    int num1 = 1;
    cout << num1 << endl;
    num1 += 1; // n += m --> n = n + m
    cout << num1 << endl;
    num1 -= 1;
    cout << num1 << endl;
    num1 *= 2;
    cout << num1 << endl;
    num1 /= 2;
    cout << num1 << endl;
    num1 %= 2;
    cout << num1 << endl;

    return 0;
}