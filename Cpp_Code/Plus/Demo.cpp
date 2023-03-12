#include <iostream>
using namespace std;

void func(int a)
{
    cout << "func" << a << endl;
}
void func(double b)
{
    cout << "func" << b << endl;
}

int main()
{
    func(1);
    func(1.0);

    return 0;
}