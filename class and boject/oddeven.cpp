#include<iostream>
using namespace std;
class Oddeven
{
    int a;
    public:
    void read();
    void display();
};
int main()
{
    Oddeven a,b;
    a.read();
    b.read();
    a.display();
    b.display();
    return 0;
}
void Oddeven::read()
{
    cout<<"Enter the number you want to check:"<<endl;
    cin>>a;
}
void Oddeven::display()
{
    if(a%2==0)
    {
        cout<<"The number is even.";
    }
    else
    {
        cout<<"The number is odd.";
    }
}