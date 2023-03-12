#include <iostream>
using namespace std;

int main()
{
    int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "整个数组所占用的空间为: " << sizeof(myArray) << endl;
    cout << "单个元素所占空间为: " << sizeof(myArray[0]) << endl;
    cout << "数组的元素个数为: " << sizeof(myArray) / sizeof(myArray[0]) << endl; 
}