#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "enter your age " <<endl;
    cin >> age;

    if (age > 18)
    {
        cout << "your above 18" << endl;
    }
    else
    {
        cout << "you are belov 18" << endl;
    }

    return 0;
}