#include<iostream>
using namespace std;
int main()
{
    int n,fact=1,i;
    cout<<"Enter the number :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    cout<<"The factorial is :"<<fact;
    return 0;
}