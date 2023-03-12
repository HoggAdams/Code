#include <iostream>
using namespace std;

int main()
{
    goto FLAG;
    cout << "1" << endl;
    FLAG:
    cout << "2" << endl;
}