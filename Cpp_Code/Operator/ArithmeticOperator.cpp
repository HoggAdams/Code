#include <iostream>
using namespace std;

int mian()
{
    // 算术运算符
    // + - * /
    // 算术运算符不会改变运算符的数据类型
    int num1 = 10;
    int num2 = 3;
    cout << num1 + num2 << endl;
    cout << num1 - num2 << endl;
    cout << num1 * num2 << endl;
    cout << num1 / num2 << endl;

    // % --> 取余
    cout << num2 % num1 << endl;

    // ++ 自增、 -- 自减
    cout << num1 << endl;
    cout << num1++ << endl;
    cout << ++num1 << endl;

    return 0;
}