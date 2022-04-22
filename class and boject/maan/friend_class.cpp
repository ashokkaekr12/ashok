#include<iostream>
using namespace std;
class A;
class B
{
    private:
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter the value of a and b:";
        cin>>a>>b;
    }
    friend class A;
};
class A
{
    public:
    void display(B obj2)
    {
        int sum;
        sum=obj2.a+obj2.b;
        cout<<"The sum of a and b are:"<<sum;
    }
};
int main()
{
    B obj2;
    A obj;
    obj2.getdata();
    obj.display(obj2);
    return 0;
}
