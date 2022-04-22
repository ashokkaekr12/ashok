#include<iostream>
using namespace std;
class Test
{
    static int a;
    public:
    void getdata();
   static void putdata();
};
int Test::a;
int main()
{
    Test t1,t2;
    t1.getdata();
    Test::putdata();
    return 0;
}
void Test::getdata()
{
    cout<<"Enter the value of a :";
    cin>>a;
    a++;
}
void Test::putdata()
{
    cout<<"The value of a is :"<<a;
}