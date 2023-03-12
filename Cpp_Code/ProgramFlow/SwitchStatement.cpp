#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "请输入你的数字：" << endl;
    cin >> num;
    switch (num)
    {
        case 1: 
            cout << "1" << endl;
            break;
        case 2:
            cout << "2" << endl;
            break;
        case 3:
            cout << "3" << endl;
            break;
    }

    return 0;
}