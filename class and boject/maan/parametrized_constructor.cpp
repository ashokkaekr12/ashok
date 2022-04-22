#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
    Test(int x,int y)
    {
        a=x;
        b=y;
    }
    void display();

};
void Test::display()
{
    cout<<"The value of a and b is:"<<a<<"and"<<b;
}
int main()
{
    Test t1(10,20);
    t1.display();
    return 0;
}
