#include <iostream>

using namespace std;

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int a, b;

    cout << "enter the first number " << endl;
    cin >> a;
    cout << "enter the second number " << endl;
    cin >> b;
    cout << sum(a, b) << endl;

    return 0;
}