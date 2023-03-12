#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int * p = &a;

    cout << sizeof(int *) << " . " << sizeof(p) << endl;

    return 0;
}