#include <iostream>
using namespace std;

int main()
{
    char num;
    cout << "请输入你的字母：" << endl;
    cin >> num;
    while ((int)num < (int)'z')
    {
        num += 1;
        cout << num << endl;
    }

    return 0;
}