//write a program to add two numbers using function.
#include<iostream>
using namespace std;
void add(int ,int);
int main()
{
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    add(a,b);
    return 0;   
}
void add(int c,int d)
{
    int result;
    result=c+d;
    cout<<"The sum is :"<<result;
}