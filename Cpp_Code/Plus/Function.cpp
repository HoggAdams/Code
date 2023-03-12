#include <iostream>

int num(int a = 10);

int main()
{
    int i = num();
    std::cout << i << std::endl;
    int j = num(11);
    std::cout << j << std::endl;

    return 0;
}

int num(int a)
{
    return a;
}