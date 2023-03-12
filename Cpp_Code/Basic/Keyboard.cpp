#include <iostream>
using namespace std;

int main()
{
    // 创建变量： 数据类型 变量名称 = 变量初始值
    // 变量名称 不能为 关键字
    // 关键字 --> C++中具有特殊意义的单词
    cout << "hello world" << endl;

    // 标识符只能由字母、数字、下划线组成
    int AIBlood = 100;
    int _posts = 10;

    // 第一个字符必须为字母或下划线
    // int 2_Hello = 10; // 错误 

    // 标识符中字母区分大小写
    char hello = 'a';
    char Hello = 'n';
    cout << hello << Hello << endl;

    return 0;
}
