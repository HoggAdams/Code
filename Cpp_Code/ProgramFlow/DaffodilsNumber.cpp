#include <iostream>
using namespace std;

int main()
{
    int num = 100;
    do {
        int bai = num / 100;
        int shi = (num - bai * 100) / 10;
        int ge = (num - bai * 100) % 10;
        int recode = bai * bai * bai + shi * shi * shi + ge * ge * ge;
        if (recode == num)
        {
            cout << num << endl;
        }
        num++;
    } while (num < 1000);
}