#include <iostream>
using namespace std;

int main()
{
    // 转义字符
    // \n --> 换行
    cout << "Hello \n World" << endl;

    // \\ --> "\" 
    cout << "\\" << endl;

    // \t --> 水平制表符 --> 用于对齐
    cout << "Hello\tWorld" << endl;

    return 0;
}