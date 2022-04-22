#include<iostream>
using namespace std;
void add(int,int);
void add(int,int,int);
void add(int,int,int,int);
int main()
{
    int a,b,c,d;
    cout<<"Enter the value:";
    cin>>a>>b>>c>>d;
    add(a,b);
    add(a,b,c);
    add(a,b,c,d);

return 0;   
}
void add(int n1,int n2)
{
    cout<<"The sum of a and b:"<<n1+n2<<endl;
}
void add(int n1,int n2,int n3)
{
    cout<<"The sum of a,b and c:"<<n1+n2+n3<<endl;
}
void add(int n1,int n2,int n3,int n4)
{
    cout<<"The sum of a,b,c and d:"<<n1+n2+n3+n4<<endl; 
}