#include<iostream>
using namespace std;
class Test
{
    private:
    int a,b;
    public:
    Test(int x,int y)
    {
        a=x;
        b=y;
    }
    Test(Test &obj)
    {
        a=obj.a;
        b=obj.b;
    }
    void display()
    {
        cout<<"The value of a and b is:"<< a <<" and "<<b<<endl; 
    }
};
int main()
{
    Test obj1(10,20);
    Test obj2(obj1);
    Test obj3=obj1;
    obj1.display();
    obj2.display();
    obj3.display(); 
    return 0;
}