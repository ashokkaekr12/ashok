#include<iostream>
using namespace std;
class Test
{
    private:
    static int count;
    public:
    void read();
    void display();
};
int Test::count;
int main()
{
    Test t1,t2,t3,t4;
    t1.read();
    t4.read();
    t1.display();
    t3.display();
    return 0;
}
void Test::read()
{
    count;
}
void Test::display()
{
    cout<<"Name="<<count;
}

