/*Wap to define a class Number that has two number as datamamber and appropriate
member to initilize the data and the member function Declare a function maximum 
as friend of class no that determines which datamember have the largest value*/
#include<iostream>
using namespace std;
class Number
{
    int a,b;
    public:
    void read();
    friend void Maximum(Number);
};
void Number::read()
{
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
}
void Maximum(Number n1)
{
    if(n1.a>n1.b)
    {
        cout<<"Tne maximum value is:"<<n1.a;
    }
    else
    {
        cout<<"The maximum value is:"<<n1.b;
    }
}
int main()
{
    Number n1;
    n1.read();
    Maximum(n1);
    return 0;
}