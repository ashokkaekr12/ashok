#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter the value of a and b:";
        cin>>a>>b;
    }
   friend void display(Test);
};
void display(Test t1)
{
    cout<<"The value of and b are:"<<t1.a+t1.b;
}
int main()
{
    Test t1;
    t1.getdata();
    display(t1);
    return 0;
}