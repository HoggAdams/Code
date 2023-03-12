#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 100; i++)
    {
        if (i % 10 == 7)
        {
           cout << i << endl;
        }
        else if (i / 10 == 7)
        {
            cout << i << endl;
        }
        else if (i / 7 == 0 && i >= 7)
        {
            cout << i << endl;
        }
    }
}