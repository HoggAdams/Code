#include <iostream>
using namespace std;

int main()
{
    // 单if语句
    int AIBlood = 100;
    if (AIBlood > 0)
    {
        cout << "你的血量为: " << AIBlood << endl;
        AIBlood--;
    }

    // if ... else ... 语句
    int num = 3;
    if (num < 2)
    {
        cout << "Hello" << endl;
    } else
    {
        cout << "world" << endl;
    }
    
    // if ... elif ... else ... 语句
    if (num < 2)
    {
        cout << "Hello" << endl;
    }
    else if (num = 3)
    {
        cout << "123" << endl;
    }
    else
    {
        cout << "s" << endl;
    }

    // 嵌套if语句
    if (num > 0)
    {
        if (num = 3)
        {
            cout << "sda" << endl;
        }
    }

    return 0;
}