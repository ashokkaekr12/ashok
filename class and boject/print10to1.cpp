#include<iostream>
using namespace std;
class Print
{
    int i;
    public:
    void display();
};
int main()
{
    Print a1;
    a1.display();
    return 0;
}
void Print::display()
{
for(i=10;i>=0;i--)
{
    cout<<"  "<<i;
}
}