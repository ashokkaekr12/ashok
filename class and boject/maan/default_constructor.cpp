#include<iostream>
using namespace std;
class Test
{
    private:
    int a,b;
    public:
    Test()
    {
        a=15;
        b=20;
    }
    void display()
    {
        cout<<"The value of a and b is:"<< a <<"and"<<b;
    }
};
int main()
{

Test t1;
t1.display();
    return 0;
}