#include <iostream>
using namespace std;

// 常量的定义方式
// 1、#define 宏常量
// 2、const修饰的变量

#define Day 7

int main()
{
    // Day 为常量，不可修改
    cout << "一周总共有" << Day << "天" << endl;

    // month 为常量，不可修改
    const int month = 12;
    cout << "一年总共有" << month << "月" << endl;

    return 0;
}