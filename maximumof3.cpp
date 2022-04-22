#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three number : ";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"The maximum number is : "<<a;
    }
    else if(b>c)
    {
        cout<<"The maximum number is : "<<b;
    }
    else
    {
    cout<<"The maximum number is : "<<c;
    }
    return 0;
}