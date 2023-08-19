#include <iostream>

using namespace std;

class employee
{
private:
    int salary;
    char data;

public:
    int age;
    int gender;
    int name;
    void info(int salary,char data,int age,int gender,int name);
    void records();

};

void employee ::info(int salary, char data, int age, int gender,int name)
{
    age = 22;
    gender = 1;
    data = 'S';
    name = 0;
    if (data == 'S')
    {
        salary = 100000;
    }
    else
    {
        salary = 70000;
    }
}

void employee :: records()
{
    cout << age << endl;
    cout << gender << endl;
    cout << salary << endl;
    cout << data << endl;
    cout << name << endl;
}

int main()
{
    employee a;
    a.info(120000,'S',22,0,1);
    a.age = 22;
    a.records();


    return 0;
}