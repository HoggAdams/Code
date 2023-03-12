#include <iostream>
using namespace std;

int main()
{
    // 数据类型
    // 整型: 短整型、整型、长整型、长长整型
    // 短整型 --> 2字节
    short n1 = 1;
    // 整型 --> 4字节
    int n2 = 2;
    // 长整型 --> windows和linux32位为4字节、linux64位为8字节
    long n3 = 3;
    // 长长整型 --> 8字节
    long long n4 = 4;

    // sizeof()关键字
    cout << "int类型的大小为" << sizeof(n2) << "字节" << endl;

    // 实型（浮点型）:单精度浮点数、双精度浮点数
    // 单精度浮点数 --> 4字节
    float f1 = 3.14f;
    // 双精度浮点数 --> 8字节
    double f2 = 3.14;

    // 字符型 --> char varName = '单个字符';
    // 只能储存一个字符，且只能用单引号包裹
    // 字符储存本质：将对应的ASCI编码放入到存储单元
    char c1 = 'a';
    cout << c1 << endl;

    return 0;
}