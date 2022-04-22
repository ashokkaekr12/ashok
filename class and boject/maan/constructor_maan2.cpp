#include<iostream>
using namespace std;
class Bankcustomer
{
    private:
    char name[20];
    int accountno;
    int balance;
    Bankcustomer(char name1[10],int x,int y=1000)
    {
     name[10]=name1[10];
     cout<<"Enter name:";
     cin>>name;
     accountno=x;
     balance=y;
    }
    void display()
    {
     cout<<"Name="<<name<<endl<<"Accountno="<<accountno<<endl<<"Balance="<<balance;
    }

};
int main()
{
Bankcustomer obj1(112);
obj1.display();
return 0;
}