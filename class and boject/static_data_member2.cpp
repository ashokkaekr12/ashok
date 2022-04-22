#include<iostream>
using namespace std;
class Test
{
    static int a;
    public:
    void get();
    void display();
};
int Test::a;
int main()
{
    Test t1,t2;
    t1.get();
    t2.display();
    return 0;
}
void Test::get()
{
a=10;
a++;
}
void Test::display()
{
    cout<<"The value of a is:"<<a;
}