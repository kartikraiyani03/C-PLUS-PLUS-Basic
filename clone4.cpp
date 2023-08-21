#include<iostream>
 
using namespace std;
 
int main()
{
     int a = 35;
     int *ptr = &a;

     cout<<"address "<<ptr<<endl;
     cout<<"the value "<<*ptr<<endl;
     cout<<"the value "<<a<<endl;
     cout<<"the address"<<&a<<endl;


return 0;
}