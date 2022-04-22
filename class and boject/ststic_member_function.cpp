#include<iostream>
using namespace std;
class Test
{
    static int a;
    public:
    static void read();
    static void display();
};
int Test::a;
int main()
{
Test::read();
Test::display();
    return 0;
}
void Test::read()
{
    cout<<"Enter the value of a";
    cin>>a;
    a++;
    a++;
}
void Test::display()
{
    cout<<"The value of a is :"<<a;
}