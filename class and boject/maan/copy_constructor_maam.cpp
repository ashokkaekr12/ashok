#include<iostream>
using namespace std;
class Constructor
{
    int a,b;
    public:
    Constructor()
    {
        cout<<"Default Constructor is called"<<endl;
    }
    Constructor(int,int);
    Constructor(Constructor &obj);
    void display()
    {
        cout<<"The value of a and b is:"<<a<<"and"<<b<<endl;
    }
};
int main()
{
    Constructor obj1;
    Constructor obj2(10,20);
    Constructor obj3=obj2;
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}
Constructor::Constructor(int x,int y)
{
    a=x;
    b=y;
    cout<<"parametrized constructor is called"<<endl;
}
Constructor::Constructor(Constructor &obj)
{
    a=obj.a;
    b=obj.b;
    cout<<"Copy constructor is called"<<endl;
}