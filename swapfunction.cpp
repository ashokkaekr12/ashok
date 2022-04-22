#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
int a=5,b=4,result;
swap(a,b);
return 0;
}
void swap(int c,int d)
{
    int temp,result;
    temp=c;
    c=d;
    d=temp;
    cout<<"The value of a:"<<c<<"and b="<<d;

}