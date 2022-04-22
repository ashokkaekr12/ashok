#include<iostream>
using namespace std;
class Employee
{
    private:
    char name[10];
    int id;
    char address[10];
    public:
    Employee()
    {
        id=201609;
    }
    void read()
    {
        cout<<"Enter the name and address:";
        cin>>name>>address;
    }
    void display()
    {
        cout<<"Name="<<name<<endl<<"Id="<<id<<endl<<"Address="<<address;

    }
};
int main()
{
    Employee e1;
    e1.read();
    e1.display();
    return 0;
}