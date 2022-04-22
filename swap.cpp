#include<iostream>
using namespace std;
int main()
{
int a,b,temp;
cout<<"Enter two numbers :"<<endl;
cin>>a>>b;
cout<<"The two numbers are a="<<a<<" and b="<<b<<endl;
temp=a;
a=b;
b=temp;
cout<<"The two numbers are a="<<a<<" and b="<<b;

 return  0;   
}