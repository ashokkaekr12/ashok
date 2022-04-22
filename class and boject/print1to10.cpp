#include<iostream>
using namespace std;
class Print
{
    public:
    void read();
};
int main()
{
    Print p1;
    p1.read();
    return 0;
}
void Print::read()
{
    int i;
    cout<<"The nth term is:";
    for(i=1;i<10;i++)
    {
       cout<<i;
    }
}

