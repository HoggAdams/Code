#include <iostream>
using namespace std;

struct studentInformation
{
    string name;
    int age;
    int score;
};

int main()
{
    struct studentInformation arr[3] = 
    {
       {"Hogg", 19, 70},
       {"Mars", 19, 70},
       {"Alger", 19, 70}
    };
    
    cout << arr[0].name << " . " << arr[0].age << " . " << arr[0].score << " . " << endl;
    cout << arr[1].name << " . " << arr[1].age << " . " << arr[1].score << " . " << endl;
    cout << arr[2].name << " . " << arr[2].age << " . " << arr[2].score << " . " << endl;

    return 0;
}