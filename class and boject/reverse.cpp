#include<iostream>
using namespace std;
class Reverse
{
    int num;
    public:
    void read();
    void reverse();
};
int main()
{
Reverse r1;
r1.read();
r1.reverse();
return 0;
}
void Reverse::read()
{
    cout<<"Enter the number:";
    cin>>num;
}
void Reverse::reverse()
{
    int rev=0,rem,num;
    while(num!=0)
    {
       num=num%10;
       rev=rev*10+num;
       num=num/10;
    }
    cout<<"The reverse is :"<<rev;
}
