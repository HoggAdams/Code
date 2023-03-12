#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   int frequency = 1;
   int userNumber;
   while (frequency <= 3)
   {
    int computerNumber = rand()% 10 + 1;
    cout << "请输入你的数字：" << endl;
    cin >> userNumber;
    if (userNumber == computerNumber)
    {
        cout << "你猜对了!" << endl;
        break;
    }
    else if (userNumber < computerNumber)
    {
        cout << "你猜的数字太小了" << endl;
    }
    else if (userNumber > computerNumber)
    {
        cout << "你猜的数字太小了" << endl;
    }
    if (3-frequency != 0)
    {
    cout << "你还有" << 3-frequency << "次机会" << endl;
    }
    else if (3-frequency == 0)
    {
        cout << "你没有机会了" << endl;
        cout << "你输了" << endl;
    }
    frequency++;
   } 

    return 0;
}