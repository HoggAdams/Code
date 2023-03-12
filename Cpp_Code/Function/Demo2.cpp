#include <iostream>
using namespace std;

// 1. 无参无返
void test01()
{
    cout << "123" << endl;
}
void test02(int a)
{
    cout << a << endl;
}
// 3. 无参无返
int test03()
{
    return 2;
}
// 4. 有参有返
int test04(int b)
{
    return b;
}

int main()
{
    test01();
    test02(1);
    int j = test03();
    int q = test04(3);

    return 0;
}