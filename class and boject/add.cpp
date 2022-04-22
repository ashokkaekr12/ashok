//Write a program class addition of two number.
#include<iostream>
using namespace std;
class Add
{
    int a,b;
    public:
    void read();
    void display();
};
int main()
{
    Add aa;
    aa.read();
    aa.display();
    return 0;
}
void Add::read()
{
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
}
void Add::display()
{
    cout<<"The sum of a and b="<<a+b;
}




