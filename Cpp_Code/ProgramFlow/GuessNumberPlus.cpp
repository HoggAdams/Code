#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   int frequency;
   int userNumber;
   char judge;

   FLAG:

   frequency = 1;

   while (frequency <= 3)
   {
    int computerNumber = (rand() % (10 - 1)) + 2;
    cout << "请输入你的数字：";
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
        cout << "你猜的数字太大了" << endl;
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
    cout << "是否重新开始(Y/N): ";
    cin >> judge;
    if (judge == 'Y' || judge == 'y')
    {
        goto FLAG;
    }
    else if (judge == 'N' || judge == 'n')
    {
        cout << "游戏结束" << endl;
    }
    else
    {
        cout << "抱歉你的操作无效" << endl;
    }
    return 0;
}