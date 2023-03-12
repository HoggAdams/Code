#include <iostream>
using namespace std;

int swap(int *p1, int *p2);

int main()
{
    int a = 10;
	int b = 20;
	swap(&a, &b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}

int swap(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	return 0;
}
