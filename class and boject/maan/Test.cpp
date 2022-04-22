//function overloading
#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
    Test()
    {
        a=0;
        b=0;
    }
    Test(int x);
    Test(int c,int d);
    void display()
    {
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
    }
};
Test::Test(int x)
{
    a=x;
    b=x;
}
Test::Test(int c,int d)
{
    a=c;
    d=b;
}
int main()
{
    Test t1;
    t1.display();
    Test t2(15);
    t2.display();
    Test t3(10,30);
    t3.display();
    return 0;
}