#include <iostream>

int main()
{
    int a = 10;
    int &b = a;
    int c = 20;
    b = c;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;

    return 0;
}