#include<iostream>
using namespace std;
class Add
{
    int static a;
    public:
    void getdata();
    void putdata();
};
int Add::a;
int main()
{
    Add a1,a2;
    a1.getdata();
    a2.putdata();
    return 0;
}
void Add::getdata()
{
    cout<<"Enter the value of a and b:";
    cin>>a;
}
void Add::putdata()
{
    cout<<"The subtract of a and b is:"<<a;
}