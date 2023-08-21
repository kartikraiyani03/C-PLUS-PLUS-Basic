#include <iostream>

using namespace std;

int main()
{
  int a= 5;
  int *b = &a;

  cout<<"The Value is "<<a<<endl;
  cout<<"The Addrese is "<<&a<<endl;
  cout<<"The Adress is "<<b<<endl;
  cout<<"The VAlue Is "<<*b<<endl;

    return 0;
} 